#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class IZoneServer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "IZoneServer"));
	}


	template <typename T = bool> T Send(uintptr_t pbPackage, uint64_t mode_route_id) {
		return ((T (*)(IZoneServer*, uintptr_t, uint64_t))(Il2CppBase() + 0x0))(this, pbPackage, mode_route_id);
	}
	template <typename T = uintptr_t> T GetNetworkStatus() {
		return ((T (*)(IZoneServer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T PrintStatus() {
		return ((T (*)(IZoneServer*))(Il2CppBase() + 0x0))(this);
	}

};

}
