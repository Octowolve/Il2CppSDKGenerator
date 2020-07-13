#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetWorkshopEntranceConfRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetWorkshopEntranceConfRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _workshop_entrance_conf() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetWorkshopEntranceConfRes*))(Il2CppBase() + 0x5218AD4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetWorkshopEntranceConfRes*, int32_t))(Il2CppBase() + 0x5218ADC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_workshop_entrance_conf() {
		return ((T (*)(CSGetWorkshopEntranceConfRes*))(Il2CppBase() + 0x5218AE4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetWorkshopEntranceConfRes*, bool))(Il2CppBase() + 0x5218AEC))(this, createIfMissing);
	}

};

}
