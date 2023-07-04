docker:
	docker build -t arch .
	docker run -it --cap-add=SYS_PTRACE --security-opt seccomp=unconfined --name archnm -v $(current_dir):/ft_nm arch

docker_start:
	docker start -i archnm

docker_run:
	docker exec -it archnm /bin/zsh

prune:
	docker system prune -a --volumes
