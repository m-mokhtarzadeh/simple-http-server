FROM gcc:9.3.0 as build
COPY . /usr/src/
RUN make server

FROM scratch
COPY --from=build /usr/src/server /server
ENV SERVER_PORT=80
ENTRYPOINT ["/server"]
