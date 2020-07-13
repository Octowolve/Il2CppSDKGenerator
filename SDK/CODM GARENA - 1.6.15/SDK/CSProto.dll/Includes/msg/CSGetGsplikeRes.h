#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetGsplikeRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetGsplikeRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _gsplike_players() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetGsplikeRes*))(Il2CppBase() + 0x5216C88))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetGsplikeRes*, int32_t))(Il2CppBase() + 0x5216C90))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_gsplike_players() {
		return ((T (*)(CSGetGsplikeRes*))(Il2CppBase() + 0x5216C98))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetGsplikeRes*, bool))(Il2CppBase() + 0x5216CA0))(this, createIfMissing);
	}

};

}
