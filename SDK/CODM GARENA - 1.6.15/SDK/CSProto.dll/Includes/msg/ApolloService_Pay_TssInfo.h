#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ApolloServicePayTssInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ApolloService_Pay_TssInfo"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _product_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _begin_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _end_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& _grandtotal_opendays() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_product_id() {
		return ((T (*)(ApolloServicePayTssInfo*))(Il2CppBase() + 0x510C360))(this);
	}
	template <typename T = void> T set_product_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ApolloServicePayTssInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510C368))(this, value);
	}
	template <typename T = uint64_t> T get_begin_time() {
		return ((T (*)(ApolloServicePayTssInfo*))(Il2CppBase() + 0x510C370))(this);
	}
	template <typename T = void> T set_begin_time(uint64_t value) {
		return ((T (*)(ApolloServicePayTssInfo*, uint64_t))(Il2CppBase() + 0x510C378))(this, value);
	}
	template <typename T = uint64_t> T get_end_time() {
		return ((T (*)(ApolloServicePayTssInfo*))(Il2CppBase() + 0x510C388))(this);
	}
	template <typename T = void> T set_end_time(uint64_t value) {
		return ((T (*)(ApolloServicePayTssInfo*, uint64_t))(Il2CppBase() + 0x510C390))(this, value);
	}
	template <typename T = int64_t> T get_grandtotal_opendays() {
		return ((T (*)(ApolloServicePayTssInfo*))(Il2CppBase() + 0x510C3A0))(this);
	}
	template <typename T = void> T set_grandtotal_opendays(int64_t value) {
		return ((T (*)(ApolloServicePayTssInfo*, int64_t))(Il2CppBase() + 0x510C3A8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ApolloServicePayTssInfo*, bool))(Il2CppBase() + 0x510C3B8))(this, createIfMissing);
	}

};

}
