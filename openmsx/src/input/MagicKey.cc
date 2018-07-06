// $Id: MagicKey.cc 12631 2012-06-14 20:18:24Z m9710797 $

#include "MagicKey.hh"
#include "serialize.hh"
#include "serialize_meta.hh"

namespace openmsx {

// Pluggable
const std::string& MagicKey::getName() const
{
	static const std::string NAME = "magic-key";
	return NAME;
}

string_ref MagicKey::getDescription() const
{
	return "Dongle used by some Japanese games to enable cheat mode";
}

void MagicKey::plugHelper(Connector& /*connector*/, EmuTime::param /*time*/)
{
}

void MagicKey::unplugHelper(EmuTime::param /*time*/)
{
}


// JoystickDevice
byte MagicKey::read(EmuTime::param /*time*/)
{
	return JOY_BUTTONB | JOY_BUTTONA | JOY_RIGHT | JOY_LEFT;
}

void MagicKey::write(byte /*value*/, EmuTime::param /*time*/)
{
}


template<typename Archive>
void MagicKey::serialize(Archive& /*ar*/, unsigned /*version*/)
{
}
INSTANTIATE_SERIALIZE_METHODS(MagicKey);
REGISTER_POLYMORPHIC_INITIALIZER(Pluggable, MagicKey, "MagicKey");

} // namespace openmsx