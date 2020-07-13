#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetUpdateContentRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetUpdateContentRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _update_content() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _update_url() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetUpdateContentRes*))(Il2CppBase() + 0x521885C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetUpdateContentRes*, int32_t))(Il2CppBase() + 0x5218864))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_update_content() {
		return ((T (*)(CSGetUpdateContentRes*))(Il2CppBase() + 0x521886C))(this);
	}
	template <typename T = void> T set_update_content(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGetUpdateContentRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5218874))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_update_url() {
		return ((T (*)(CSGetUpdateContentRes*))(Il2CppBase() + 0x521887C))(this);
	}
	template <typename T = void> T set_update_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGetUpdateContentRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5218884))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetUpdateContentRes*, bool))(Il2CppBase() + 0x521888C))(this, createIfMissing);
	}

};

}
