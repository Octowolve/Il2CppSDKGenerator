#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponPartData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponPartData"));
	}

	template <typename T = Il2CppString*> T& ActorType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& ActorType3P() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& MovementScaleAdd() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& SprintMovementScaleAdd() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& DisperseBaseAdd() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& DisperseModifierStandingAdd() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& DisperseModifierJumpingAdd() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& DisperseModifierWalkingAdd() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& RecoilUpBaseAdd() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& RecoilUpModifierAdd() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& RecoilUpMaxAdd() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& RecoilLateralBaseAdd() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& RecoilLateralModifierAdd() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& RecoilLateralMaxAdd() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& RecoilScaleStandingAdd() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& RecoilScaleWalkingAdd() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& RecoilScaleJumpingAdd() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DamageRangeAdd() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DamageValueAdd() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& ChangeClipTimePrecentAdd() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& RecoilScaleWeaponShake() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& AttachSocket() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& MeshAssetID1P() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& MeshAssetID3P() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& MeshAssetIDUI() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& FemaleMeshAssetID3P() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& UseWeaponCamo() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BuffIDs() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(WeaponPartData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C4F41C))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(WeaponPartData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C52938))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
