#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountSetNewbieGuideRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountSetNewbieGuide_Res"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSAccountSetNewbieGuideRes*))(Il2CppBase() + 0x5170908))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSAccountSetNewbieGuideRes*, int32_t))(Il2CppBase() + 0x5170910))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountSetNewbieGuideRes*, bool))(Il2CppBase() + 0x5170918))(this, createIfMissing);
	}

};

}
