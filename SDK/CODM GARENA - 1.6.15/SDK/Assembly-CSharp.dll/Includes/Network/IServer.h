#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class IServer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "IServer"));
	}


	template <typename T = void> T Shutdown() {
		return ((T (*)(IServer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(IServer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(IServer*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename T = void> T Init() {
		return ((T (*)(IServer*))(Il2CppBase() + 0x0))(this);
	}

};

}
