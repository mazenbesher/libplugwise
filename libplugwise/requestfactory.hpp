/**
 * This file is part of libplugwise.
 *
 * (c) Fraunhofer ITWM - Mathias Dalheimer <dalheimer@itwm.fhg.de>, 2010
 *
 * libplugwise is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * libplugwise is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with libplugwise. If not, see <http://www.gnu.org/licenses/>.
 *
 */


#ifndef LIBPLUGWISE_REQUESTFACTORY_HPP
#define LIBPLUGWISE_REQUESTFACTORY_HPP 1

#include "common.hpp"
#include <stickinitrequest.hpp>
#include <calibrationrequest.hpp>
#include <powerinformationrequest.hpp>


namespace plugwise {
  class RequestFactory {
    public:
      typedef std::shared_ptr<RequestFactory> Ptr;
      RequestFactory () {};
      StickInitRequest::Ptr getStickInitRequest() const;
      CalibrationRequest::Ptr getCalibrationRequest(const std::string& _device_id) const;
      PowerInformationRequest::Ptr getPowerInformationRequest(const std::string& _device_id) const;
      virtual ~RequestFactory() {};

    private:
      RequestFactory (const RequestFactory& original);
      RequestFactory& operator= (const RequestFactory& rhs);
      
  };
  
};


#endif /* LIBPLUGWISE_REQUESTFACTORY_HPP */

