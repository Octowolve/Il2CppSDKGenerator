#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class MidasResulinfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "MidasResulinfo"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _token() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _url_params() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _request_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_token() {
		return ((T (*)(MidasResulinfo*))(Il2CppBase() + 0x4EA51F0))(this);
	}
	template <typename T = void> T set_token(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MidasResulinfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA51F8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_url_params() {
		return ((T (*)(MidasResulinfo*))(Il2CppBase() + 0x4EA5200))(this);
	}
	template <typename T = void> T set_url_params(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MidasResulinfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA5208))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_request_id() {
		return ((T (*)(MidasResulinfo*))(Il2CppBase() + 0x4EA5210))(this);
	}
	template <typename T = void> T set_request_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MidasResulinfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA5218))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(MidasResulinfo*, bool))(Il2CppBase() + 0x4EA5220))(this, createIfMissing);
	}

};

}
