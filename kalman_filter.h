#ifndef KALMAN_FILTER_H
#define KALMAN_FILTER_H

#include"Eigen/Dense"

using Eigen::MatrixXd;
using Eigen::VectorXd;

class KalmanFilter {
public:


	///* state vector
	VectorXd x_;

	///* state covariance matrix
	MatrixXd P_;

	///* state transistion matrix
	MatrixXd F_;

	///* process covariance matrix
	MatrixXd Q_;

	///* measurement matrix
	MatrixXd H_;

	///* measurement covariance matrix
	MatrixXd R_;

	KalmanFilter();//Constructor

	virtual ~KalmanFilter();//destructor

	void Predict();

	void Update(const VectorXd& z);


};


#endif KALMAN_FILTER_H
