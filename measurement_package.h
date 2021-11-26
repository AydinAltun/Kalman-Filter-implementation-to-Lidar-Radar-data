#ifndef MEASUREMNET_PACKAGE_
#define MEASUREMNET_PACKAGE_

#include<iostream>

class MeasurementPackage {
public:
	int64_t timestamp_;// to calculate the dt for time step, we will use it

	enum SensorType {
		LASER, RADAR
	} sensor_type_;

	Eigen::VectorXd raw_measurements_;

};

#endif // !MEASUREMNET_PACKAGE_

