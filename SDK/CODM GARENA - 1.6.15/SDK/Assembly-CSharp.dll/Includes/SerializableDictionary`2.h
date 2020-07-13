#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SerializableDictionary2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SerializableDictionary`2"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _serializedKeys() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _serializedValues() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _serializedCount() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeforeSerialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAfterDeserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T OnBeforeSerialize() {
		return ((T (*)(SerializableDictionary2*))(Il2CppBase() + 0x4B728B0))(this);
	}
	template <typename T = void> T OnAfterDeserialize() {
		return ((T (*)(SerializableDictionary2*))(Il2CppBase() + 0x4B72C98))(this);
	}

};

}
