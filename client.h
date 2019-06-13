//
// Created by achariso on 13/6/2019.
//

#ifndef FINAL_CLIENT_H
#define FINAL_CLIENT_H

#include <stdbool.h>
#include "utils.h"

const uint32 CLIENT_AEM = 9026;

/// \brief Sends given message to message's recipient.
/// \param message the message to be sent
/// \return TRUE on success, FALSE otherwise
bool send(Message message);

/// \brief Generates a new random message composed of:
///     - random recipient  ( 4 randomly generated digits: {1-9}{0-9}{0-9}{0-9} )
///     - random body       ( 256 randomly generated ascii characters )
///     - CLIENT_AEM as sender
///     - creation time_of_day as created_at timestamp
/// \return newly generated message of type message_t
Message generateMessage();

#endif //FINAL_CLIENT_H