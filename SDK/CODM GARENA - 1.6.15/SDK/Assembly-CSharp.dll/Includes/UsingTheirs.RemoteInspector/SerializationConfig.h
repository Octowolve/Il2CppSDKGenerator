#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UsingTheirs.RemoteInspector {

class SerializationConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UsingTheirs.RemoteInspector", "SerializationConfig"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_IsSerializable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T IsSerializable(uintptr_t type, Il2CppString* name, Il2CppString* componentName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x487F10C))(0, type, name, componentName);
	}

};

}
