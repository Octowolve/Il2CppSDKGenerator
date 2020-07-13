#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq {

class JConstructor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq", "JConstructor"));
	}

	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _values() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void*> T get_ChildrenTokens() {
		return ((T (*)(JConstructor*))(Il2CppBase() + 0x40C2904))(this);
	}
	template <typename T = int32_t> T IndexOfItem(uintptr_t item) {
		return ((T (*)(JConstructor*, uintptr_t))(Il2CppBase() + 0x40C290C))(this, item);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(JConstructor*))(Il2CppBase() + 0x40C299C))(this);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(JConstructor*))(Il2CppBase() + 0x40C29A4))(this);
	}
	template <typename T = bool> T DeepEquals(uintptr_t node) {
		return ((T (*)(JConstructor*, uintptr_t))(Il2CppBase() + 0x40C2C84))(this, node);
	}
	template <typename T = uintptr_t> T CloneToken() {
		return ((T (*)(JConstructor*))(Il2CppBase() + 0x40C2DAC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t writer, Il2CppArray<uintptr_t>* converters) {
		return ((T (*)(JConstructor*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x40C2E3C))(this, writer, converters);
	}
	template <typename T = uintptr_t> T get_Item(uintptr_t key) {
		return ((T (*)(JConstructor*, uintptr_t))(Il2CppBase() + 0x40C3140))(this, key);
	}
	template <typename T = int32_t> T GetDeepHashCode() {
		return ((T (*)(JConstructor*))(Il2CppBase() + 0x40C32EC))(this);
	}
	template <typename T = uintptr_t> static T Load(uintptr_t reader, uintptr_t settings) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x40C3334))(0, reader, settings);
	}

};

}
