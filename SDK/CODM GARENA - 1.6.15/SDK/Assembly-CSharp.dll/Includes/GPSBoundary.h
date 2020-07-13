#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GPSBoundary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GPSBoundary"));
	}

	template <typename T = Il2CppVector3> T& Start() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& End() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& K() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EdgeInfos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcuateEdgeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CalculateK() {
		return ((T (*)(GPSBoundary*))(Il2CppBase() + 0x279F314))(this);
	}
	template <typename T = void> T CalcuateEdgeInfo(Il2CppVector3 edgeStart, Il2CppVector3 edgeEnd, int32_t index, int32_t frameCount) {
		return ((T (*)(GPSBoundary*, Il2CppVector3, Il2CppVector3, int32_t, int32_t))(Il2CppBase() + 0x279F8E4))(this, edgeStart, edgeEnd, index, frameCount);
	}

};

}
