#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ElectricTripWireLinkerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ElectricTripWireLinkerInfo"));
	}

	template <typename T = uint32_t> T& OwnerPlayerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& SrcActorID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& DstActorID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& LinkerEffect() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& HasBeenTouched() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_HasBeenEntered() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnLineRenderEffectCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLineEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLineEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init(uint32_t ownerPlayerID, uint32_t srcActorID, uint32_t dstActorID, bool hasBeenTouched) {
		return ((T (*)(ElectricTripWireLinkerInfo*, uint32_t, uint32_t, uint32_t, bool))(Il2CppBase() + 0x3D4BF98))(this, ownerPlayerID, srcActorID, dstActorID, hasBeenTouched);
	}
	template <typename T = void> T Init_1() {
		return ((T (*)(ElectricTripWireLinkerInfo*))(Il2CppBase() + 0x3D4B93C))(this);
	}
	template <typename T = void> T SpawnLineRenderEffectCallback(uintptr_t effect, uintptr_t srcElectricTripWireBase, uintptr_t dstElectricTripWireBase) {
		return ((T (*)(ElectricTripWireLinkerInfo*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D4CC7C))(this, effect, srcElectricTripWireBase, dstElectricTripWireBase);
	}
	template <typename T = void> T ShowLineEffect(uintptr_t assetID) {
		return ((T (*)(ElectricTripWireLinkerInfo*, uintptr_t))(Il2CppBase() + 0x3D4976C))(this, assetID);
	}
	template <typename T = void> T RefreshLineEffect(bool isEnter, uint32_t playerID) {
		return ((T (*)(ElectricTripWireLinkerInfo*, bool, uint32_t))(Il2CppBase() + 0x3D4C210))(this, isEnter, playerID);
	}
	template <typename T = void> T Destroy(bool playSound) {
		return ((T (*)(ElectricTripWireLinkerInfo*, bool))(Il2CppBase() + 0x3D4950C))(this, playSound);
	}

};

}
