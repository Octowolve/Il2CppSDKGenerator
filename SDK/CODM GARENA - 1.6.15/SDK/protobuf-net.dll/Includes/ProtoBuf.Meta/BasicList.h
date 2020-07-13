#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoBuf.Meta {

class BasicList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("protobuf-net.dll", "ProtoBuf.Meta", "BasicList"));
	}

	template <typename T = uintptr_t> static T& nil() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& head() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T CopyTo(uintptr_t array, int32_t offset) {
		return ((T (*)(BasicList*, uintptr_t, int32_t))(Il2CppBase() + 0x50610A0))(this, array, offset);
	}
	template <typename T = int32_t> T Add(uintptr_t value) {
		return ((T (*)(BasicList*, uintptr_t))(Il2CppBase() + 0x5061140))(this, value);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(BasicList*, int32_t))(Il2CppBase() + 0x5061328))(this, index);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(BasicList*))(Il2CppBase() + 0x5061448))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(BasicList*))(Il2CppBase() + 0x506146C))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(BasicList*))(Il2CppBase() + 0x5061504))(this);
	}
	template <typename T = int32_t> T IndexOfReference(uintptr_t instance) {
		return ((T (*)(BasicList*, uintptr_t))(Il2CppBase() + 0x5061524))(this, instance);
	}
	template <typename T = bool> T Contains(uintptr_t value) {
		return ((T (*)(BasicList*, uintptr_t))(Il2CppBase() + 0x50615CC))(this, value);
	}

};

}
