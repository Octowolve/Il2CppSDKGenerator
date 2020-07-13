#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class INetworkService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "INetworkService"));
	}


	template <typename T = void> T add_NetworkChangedEvent(uintptr_t value) {
		return ((T (*)(INetworkService*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_NetworkChangedEvent(uintptr_t value) {
		return ((T (*)(INetworkService*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T GetNetworkState() {
		return ((T (*)(INetworkService*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetDetailNetworkInfo() {
		return ((T (*)(INetworkService*))(Il2CppBase() + 0x0))(this);
	}

};

}
