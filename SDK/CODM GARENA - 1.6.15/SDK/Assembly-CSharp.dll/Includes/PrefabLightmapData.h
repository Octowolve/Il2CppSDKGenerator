#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrefabLightmapData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabLightmapData"));
	}

	template <typename T = bool> T& UseBakery() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_lightmapResolution() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& lightmapSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_RendererInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Lightmaps() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& MatList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ReflectionProbeList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_RuntimeLightProbes() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_LightProbesFadeFactor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_LightProbesLocalAABB() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_LightProbesRegistered() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyLightmap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyUnityLightMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyRendererInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(PrefabLightmapData*, Il2CppVector3))(Il2CppBase() + 0x480C184))(this, shift);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PrefabLightmapData*))(Il2CppBase() + 0x480C444))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(PrefabLightmapData*))(Il2CppBase() + 0x480C5F4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(PrefabLightmapData*))(Il2CppBase() + 0x480C730))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PrefabLightmapData*))(Il2CppBase() + 0x480C89C))(this);
	}
	template <typename T = void> T ApplyLightmap() {
		return ((T (*)(PrefabLightmapData*))(Il2CppBase() + 0x480C988))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ApplyUnityLightMap() {
		return ((T (*)(PrefabLightmapData*))(Il2CppBase() + 0x480CA64))(this);
	}
	template <typename T = bool> T ApplyRendererInfo(Il2CppArray<uintptr_t>* infos, Il2CppArray<uintptr_t>* indexTable) {
		return ((T (*)(PrefabLightmapData*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x480D1D8))(this, infos, indexTable);
	}
	template <typename T = bool> static T ApplyUnityLightMapm__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x480D3EC))(0, x);
	}

};

}
