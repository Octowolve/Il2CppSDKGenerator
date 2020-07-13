#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Networking {

class DownloadHandlerBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Networking", "DownloadHandlerBuffer"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T GetData() {
		return ((T (*)(DownloadHandlerBuffer*))(Il2CppBase() + 0x4ABA430))(this);
	}
	template <typename T = Il2CppString*> T GetText() {
		return ((T (*)(DownloadHandlerBuffer*))(Il2CppBase() + 0x4ABA4CC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T InternalGetData() {
		return ((T (*)(DownloadHandlerBuffer*))(Il2CppBase() + 0x4ABA434))(this);
	}
	template <typename T = Il2CppString*> T InternalGetText() {
		return ((T (*)(DownloadHandlerBuffer*))(Il2CppBase() + 0x4ABA4D0))(this);
	}

};

}
