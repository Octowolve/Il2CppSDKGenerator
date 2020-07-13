#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetFuncBlockDescRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetFuncBlockDescRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _FuncSwitch() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetFuncBlockDescRes*))(Il2CppBase() + 0x5216A38))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetFuncBlockDescRes*, int32_t))(Il2CppBase() + 0x5216A40))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_FuncSwitch() {
		return ((T (*)(CSGetFuncBlockDescRes*))(Il2CppBase() + 0x5216A48))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetFuncBlockDescRes*, bool))(Il2CppBase() + 0x5216A50))(this, createIfMissing);
	}

};

}
