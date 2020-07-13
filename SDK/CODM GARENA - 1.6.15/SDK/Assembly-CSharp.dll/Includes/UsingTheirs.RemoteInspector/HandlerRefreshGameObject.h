#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UsingTheirs.RemoteInspector {

class HandlerRefreshGameObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UsingTheirs.RemoteInspector", "HandlerRefreshGameObject"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_HandlerMain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ErrorString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> static T HandlerMain(Il2CppString* jsonRequest) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x422DDDC))(0, jsonRequest);
	}
	template <typename T = Il2CppString*> static T ErrorString(Il2CppString* reason) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x422E128))(0, reason);
	}

};

}
