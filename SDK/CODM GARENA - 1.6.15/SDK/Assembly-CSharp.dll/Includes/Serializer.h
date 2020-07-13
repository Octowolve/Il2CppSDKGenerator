#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Serializer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Serializer"));
	}

	template <typename T = uintptr_t> T& builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SerializeValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SerializeObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SerializeArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SerializeString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SerializeOther() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> static T Serialize(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41D3228))(0, obj);
	}
	template <typename T = void> T SerializeValue(uintptr_t value) {
		return ((T (*)(Serializer*, uintptr_t))(Il2CppBase() + 0x41D4870))(this, value);
	}
	template <typename T = void> T SerializeObject(uintptr_t obj) {
		return ((T (*)(Serializer*, uintptr_t))(Il2CppBase() + 0x41D5250))(this, obj);
	}
	template <typename T = void> T SerializeArray(uintptr_t anArray) {
		return ((T (*)(Serializer*, uintptr_t))(Il2CppBase() + 0x41D4EA0))(this, anArray);
	}
	template <typename T = void> T SerializeString(Il2CppString* str) {
		return ((T (*)(Serializer*, Il2CppString*))(Il2CppBase() + 0x41D4ADC))(this, str);
	}
	template <typename T = void> T SerializeOther(uintptr_t value) {
		return ((T (*)(Serializer*, uintptr_t))(Il2CppBase() + 0x41D5770))(this, value);
	}

};

}
