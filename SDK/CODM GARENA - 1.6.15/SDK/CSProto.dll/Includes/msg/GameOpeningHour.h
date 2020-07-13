#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameOpeningHour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameOpeningHour"));
	}

	template <typename T = uint32_t> T& _mode_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _opening_hours() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_mode_id() {
		return ((T (*)(GameOpeningHour*))(Il2CppBase() + 0x50CCD00))(this);
	}
	template <typename T = void> T set_mode_id(uint32_t value) {
		return ((T (*)(GameOpeningHour*, uint32_t))(Il2CppBase() + 0x50CCD08))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_opening_hours() {
		return ((T (*)(GameOpeningHour*))(Il2CppBase() + 0x50CCD10))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameOpeningHour*, bool))(Il2CppBase() + 0x50CCD18))(this, createIfMissing);
	}

};

}
