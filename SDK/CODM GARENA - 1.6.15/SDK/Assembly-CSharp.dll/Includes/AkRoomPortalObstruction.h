#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkRoomPortalObstruction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkRoomPortalObstruction"));
	}

	template <typename T = uintptr_t> T& m_portal() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AkRoomPortalObstruction*))(Il2CppBase() + 0x4923150))(this);
	}
	template <typename T = void> T UpdateObstructionOcclusionValuesForListeners() {
		return ((T (*)(AkRoomPortalObstruction*))(Il2CppBase() + 0x4923200))(this);
	}
	template <typename T = void> T SetObstructionOcclusion(void* ObsOccPair) {
		return ((T (*)(AkRoomPortalObstruction*, void*))(Il2CppBase() + 0x49232B0))(this, ObsOccPair);
	}

};

}
