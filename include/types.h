/* 
 * Quantum++
 *
 * Copyright (c) 2013 - 2017 Vlad Gheorghiu (vgheorgh@gmail.com)
 *
 * This file is part of Quantum++.
 *
 * Quantum++ is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Quantum++ is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Quantum++.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
* \file types.h
* \brief Type aliases
*/

#ifndef TYPES_H_
#define TYPES_H_

namespace qpp
{

/**
* \brief Non-negative integer index
*/
using idx = std::size_t;

/**
* \brief Big integer
*/
using bigint = long long int;

/**
* \brief Complex number in double precision
*/
using cplx = std::complex<double>;

/**
* \brief Complex (double precision) dynamic Eigen column vector
*/
using ket = Eigen::VectorXcd;

/**
* \brief Complex (double precision) dynamic Eigen row vector
*/
using bra = Eigen::RowVectorXcd;

/**
* \brief Complex (double precision) dynamic Eigen matrix
*/
using cmat = Eigen::MatrixXcd;

/**
* \brief Real (double precision) dynamic Eigen matrix
*/
using dmat = Eigen::MatrixXd;

/**
* \brief Dynamic Eigen matrix over the field specified by \a Scalar
*
* Example:
* \code
* // type of mat is Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic>
* dyn_mat<float> mat(2, 3);
* \endcode
*/
template<typename Scalar> // Eigen::MatrixX_type (where type = Scalar)
using dyn_mat = Eigen::Matrix<Scalar, Eigen::Dynamic, Eigen::Dynamic>;

/**
* \brief Dynamic Eigen column vector over the field specified by \a Scalar
*
* Example:
* \code
* // type of colvect is Eigen::Matrix<float, Eigen::Dynamic, 1>
* dyn_col_vect<float> colvect(2);
* \endcode
*/
template<typename Scalar> // Eigen::VectorX_type (where type = Scalar)
using dyn_col_vect = Eigen::Matrix<Scalar, Eigen::Dynamic, 1>;

/**
* \brief Dynamic Eigen row vector over the field specified by \a Scalar
*
* Example:
* \code
* // type of rowvect is Eigen::Matrix<float, 1, Eigen::Dynamic>
* dyn_row_vect<float> rowvect(3);
* \endcode
*/
template<typename Scalar> // Eigen::RowVectorX_type (where type = Scalar)
using dyn_row_vect = Eigen::Matrix<Scalar, 1, Eigen::Dynamic>;

} /* namespace qpp */

#endif	/* TYPES_H_ */
