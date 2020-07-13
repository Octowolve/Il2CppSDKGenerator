#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAas2ClientCenterControlNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAas2Client_CenterControl_Ntf"));
	}

	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _title() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _msgInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _url() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSAas2ClientCenterControlNtf*))(Il2CppBase() + 0x516F0F8))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSAas2ClientCenterControlNtf*, int32_t))(Il2CppBase() + 0x516F100))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_title() {
		return ((T (*)(CSAas2ClientCenterControlNtf*))(Il2CppBase() + 0x516F108))(this);
	}
	template <typename T = void> T set_title(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSAas2ClientCenterControlNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516F110))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_msgInfo() {
		return ((T (*)(CSAas2ClientCenterControlNtf*))(Il2CppBase() + 0x516F118))(this);
	}
	template <typename T = void> T set_msgInfo(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSAas2ClientCenterControlNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516F120))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_url() {
		return ((T (*)(CSAas2ClientCenterControlNtf*))(Il2CppBase() + 0x516F128))(this);
	}
	template <typename T = void> T set_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSAas2ClientCenterControlNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516F130))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAas2ClientCenterControlNtf*, bool))(Il2CppBase() + 0x516F138))(this, createIfMissing);
	}

};

}
