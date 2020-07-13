#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerEigenInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerEigenInfo"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _file_name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _eigen_value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _crc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _status() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_file_name() {
		return ((T (*)(PlayerEigenInfo*))(Il2CppBase() + 0x4EA6C18))(this);
	}
	template <typename T = void> T set_file_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerEigenInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA6C20))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_eigen_value() {
		return ((T (*)(PlayerEigenInfo*))(Il2CppBase() + 0x4EA6C28))(this);
	}
	template <typename T = void> T set_eigen_value(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerEigenInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA6C30))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(PlayerEigenInfo*))(Il2CppBase() + 0x4EA6C38))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(PlayerEigenInfo*, int32_t))(Il2CppBase() + 0x4EA6C40))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_crc() {
		return ((T (*)(PlayerEigenInfo*))(Il2CppBase() + 0x4EA6C48))(this);
	}
	template <typename T = void> T set_crc(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerEigenInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA6C50))(this, value);
	}
	template <typename T = int32_t> T get_status() {
		return ((T (*)(PlayerEigenInfo*))(Il2CppBase() + 0x4EA6C58))(this);
	}
	template <typename T = void> T set_status(int32_t value) {
		return ((T (*)(PlayerEigenInfo*, int32_t))(Il2CppBase() + 0x4EA6C60))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerEigenInfo*, bool))(Il2CppBase() + 0x4EA6C68))(this, createIfMissing);
	}

};

}
