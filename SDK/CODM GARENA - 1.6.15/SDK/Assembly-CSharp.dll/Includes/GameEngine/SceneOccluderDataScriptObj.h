#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SceneOccluderDataScriptObj
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SceneOccluderDataScriptObj"));
	}

	template <typename T = int32_t> T& tileid() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& nOccluder() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& eachOccluderPolyCnts() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& eachOccluderAabb() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& eachOccluderAabbCenter() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& eachPolyPtCnts() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& normalForEachPoly() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& polyCenters() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& points() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& IsOnContour() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProduceOccluderToTmpBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawDebug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T ProduceOccluderToTmpBuffer() {
		return ((T (*)(SceneOccluderDataScriptObj*))(Il2CppBase() + 0x33EA8C8))(this);
	}
	template <typename T = void> T ApplyShift() {
		return ((T (*)(SceneOccluderDataScriptObj*))(Il2CppBase() + 0x33EA9C0))(this);
	}
	template <typename T = void> T DoShift() {
		return ((T (*)(SceneOccluderDataScriptObj*))(Il2CppBase() + 0x33EAE68))(this);
	}
	template <typename T = void> T DrawDebug() {
		return ((T (*)(SceneOccluderDataScriptObj*))(Il2CppBase() + 0x33EB310))(this);
	}

};

}
