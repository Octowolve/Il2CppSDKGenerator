#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetUpdateMD5Res
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetUpdateMD5Res"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _update_md5() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _version() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetUpdateMD5Res*))(Il2CppBase() + 0x52188D4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetUpdateMD5Res*, int32_t))(Il2CppBase() + 0x52188DC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_update_md5() {
		return ((T (*)(CSGetUpdateMD5Res*))(Il2CppBase() + 0x52188E4))(this);
	}
	template <typename T = void> T set_update_md5(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGetUpdateMD5Res*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x52188EC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_version() {
		return ((T (*)(CSGetUpdateMD5Res*))(Il2CppBase() + 0x52188F4))(this);
	}
	template <typename T = void> T set_version(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGetUpdateMD5Res*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x52188FC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetUpdateMD5Res*, bool))(Il2CppBase() + 0x5218904))(this, createIfMissing);
	}

};

}
