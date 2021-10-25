# wating_time
pkg_name:move_random_time

Service
	server:
    rosrun move_random_time wait_random_time_server
    
	client:
    rosrun move_random_time wait_random_time_client [x] [y] [flag]
  
srv_name:move_random_time.srv

int64 x
int64 y
int16 flag
---
int64 time
