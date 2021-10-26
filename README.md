# wating_time
## pkg_name:move_random_time

## Service
	server:
    rosrun move_random_time wait_random_time_server
    
	client:
    rosrun move_random_time wait_random_time_client [x] [y] [ow] [oz] [flag]
  
   notice:srv.request.x =  floor(atof(argv[1])*100)/100;

## srv_name:move_random_time.srv
	float x
	float y
	float ow
	float oz
	int64 flag
	---
	int64 time
