#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountStartNewbieGuideReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountStartNewbieGuide_Req"));
	}

	template <typename T = int32_t> T& _start_task_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_start_task_id() {
		return ((T (*)(CSAccountStartNewbieGuideReq*))(Il2CppBase() + 0x5170934))(this);
	}
	template <typename T = void> T set_start_task_id(int32_t value) {
		return ((T (*)(CSAccountStartNewbieGuideReq*, int32_t))(Il2CppBase() + 0x517093C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountStartNewbieGuideReq*, bool))(Il2CppBase() + 0x5170944))(this, createIfMissing);
	}

};

}
