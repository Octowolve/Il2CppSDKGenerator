#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class Layers
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "Layers"));
	}

	template <typename T = Il2CppString*> static T& LayerName_Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_Ignore_Raycast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_Water() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_UIDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_HeavyObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_Terrain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_Occlusion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_StaticActor_Mid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_StaticActor_Small() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_FirstPersonView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_World() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_Pawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_StaticActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_Fire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_UIBackGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_WeaponUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_MatineeIgnore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_AimAssistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_3D_UI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_UIMatinee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_PawnWithoutCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_PawnWithoutMovementCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_SpecialLayerInGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_PhysicsVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_StaticActor_RecieveShadow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_PerspectiveUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_UISplash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_CrossAssistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_BreakableActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_LocalServerDynamic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LayerName_PhysX_PropHuntPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_LayerMask_PhysX_PropHuntPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_LayerMask_BreakableActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& m_LayerMask_LocalServerDynamic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& m_LayerMask_World() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& m_LayerMask_Pawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& m_LayerMask_Fire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& m_LayerMask_StaticActor_Small() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& m_LayerMask_StaticActor_Mid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& m_LayerMask_StaticActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& m_LayerMask_StaticActor_RecieveShadow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = int32_t> static T& m_LayerMask_Terrain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = int32_t> static T& m_LayerMask_Water() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = int32_t> static T& m_LayerMask_AimAssistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = int32_t> static T& m_LayerMask_FirstPersonCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = int32_t> static T& m_LayerMask_PawnWithoutCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = int32_t> static T& m_LayerMask_PhysicsVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = int32_t> static T& m_LayerMask_PawnWithoutMovementCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = int32_t> static T& m_LayerMask_UIDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = int32_t> static T& m_LayerMask_UIBackgroud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = int32_t> static T& m_LayerMask_UIMatinee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = int32_t> static T& m_LayerMask_UIPerspective() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = int32_t> static T& m_LayerMask_HeavyObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = int32_t> static T& m_LayerMask_SpecialLayerInGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = int32_t> static T& m_LayerMask_Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = int32_t> static T& m_LayerMask_CrossAssistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = int32_t> static T& m_LayerMask_Occlusion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = int32_t> static T& m_LayerMask_WeaponUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = int32_t> static T& m_LayerMask_UISplash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = int32_t> static T& m_LayerMask_Ignore_Raycast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsStaticActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBreakableActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	template <typename T = int32_t> static T get_LayerMask_PhysX_PropHuntPawn() {
		return ((T (*)(void *))(Il2CppBase() + 0x249218C))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_BreakableActor() {
		return ((T (*)(void *))(Il2CppBase() + 0x24922FC))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_LocalServerDynamic() {
		return ((T (*)(void *))(Il2CppBase() + 0x249246C))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_World() {
		return ((T (*)(void *))(Il2CppBase() + 0x24925DC))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_Pawn() {
		return ((T (*)(void *))(Il2CppBase() + 0x249274C))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_Fire() {
		return ((T (*)(void *))(Il2CppBase() + 0x24928BC))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_StaticActor_Small() {
		return ((T (*)(void *))(Il2CppBase() + 0x2492A2C))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_StaticActor_Mid() {
		return ((T (*)(void *))(Il2CppBase() + 0x2492B9C))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_StaticActor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2492D0C))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_StaticActor_RecieveShadow() {
		return ((T (*)(void *))(Il2CppBase() + 0x2492E7C))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_Terrain() {
		return ((T (*)(void *))(Il2CppBase() + 0x2486CF8))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_Water() {
		return ((T (*)(void *))(Il2CppBase() + 0x2492FEC))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_AimAssistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x249315C))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_FirstPersonCollider() {
		return ((T (*)(void *))(Il2CppBase() + 0x24932CC))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_PawnWithoutCollision() {
		return ((T (*)(void *))(Il2CppBase() + 0x249343C))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_PhysicsVolume() {
		return ((T (*)(void *))(Il2CppBase() + 0x24935AC))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_PawnWithoutMovementCollision() {
		return ((T (*)(void *))(Il2CppBase() + 0x249371C))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_UIDefault() {
		return ((T (*)(void *))(Il2CppBase() + 0x249388C))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_UIBackground() {
		return ((T (*)(void *))(Il2CppBase() + 0x24939FC))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_UIMatinee() {
		return ((T (*)(void *))(Il2CppBase() + 0x2493B6C))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_UIPerspective() {
		return ((T (*)(void *))(Il2CppBase() + 0x2493CDC))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_HeavyObject() {
		return ((T (*)(void *))(Il2CppBase() + 0x2493E4C))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_SpecialLayerInGame() {
		return ((T (*)(void *))(Il2CppBase() + 0x2493FBC))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_Default() {
		return ((T (*)(void *))(Il2CppBase() + 0x249412C))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_CrossAssistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x249429C))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_Occlusion() {
		return ((T (*)(void *))(Il2CppBase() + 0x249440C))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_WeaponUI() {
		return ((T (*)(void *))(Il2CppBase() + 0x249457C))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_UISplash() {
		return ((T (*)(void *))(Il2CppBase() + 0x24946EC))(0);
	}
	template <typename T = int32_t> static T get_LayerMask_Ignore_Raycast() {
		return ((T (*)(void *))(Il2CppBase() + 0x249485C))(0);
	}
	template <typename T = bool> static T IsStaticActor(int32_t layer) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x24949CC))(0, layer);
	}
	template <typename T = bool> static T IsBreakableActor(int32_t layer) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2494B88))(0, layer);
	}
	template <typename T = bool> static T IsPawn(int32_t layer) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2494C88))(0, layer);
	}
	template <typename T = bool> static T IsVehicle(int32_t layer) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2494E44))(0, layer);
	}
	template <typename T = bool> static T IsWater(int32_t layer) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2494F14))(0, layer);
	}

};

}
