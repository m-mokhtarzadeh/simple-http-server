FROM gcc:latest as build
COPY . /usr/src/
RUN make server

FROM scratch
COPY --from=build /usr/src/server /server
ENV SERVER_PORT=80
ENTRYPOINT ["/server"]
