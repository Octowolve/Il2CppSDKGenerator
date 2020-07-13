#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetActvRankedMatchInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetActvRankedMatchInfoRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _actv_infos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetActvRankedMatchInfoRes*))(Il2CppBase() + 0x51D2594))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetActvRankedMatchInfoRes*, int32_t))(Il2CppBase() + 0x51D259C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_actv_infos() {
		return ((T (*)(CSGetActvRankedMatchInfoRes*))(Il2CppBase() + 0x51D25A4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetActvRankedMatchInfoRes*, bool))(Il2CppBase() + 0x51D25AC))(this, createIfMissing);
	}

};

}
