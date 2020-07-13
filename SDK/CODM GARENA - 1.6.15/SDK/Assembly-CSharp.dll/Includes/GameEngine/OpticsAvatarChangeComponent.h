#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class OpticsAvatarChangeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "OpticsAvatarChangeComponent"));
	}

	template <typename T = uintptr_t> T& m_HighMeshRenderer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_NomalMeshRenderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& CenterPoint() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& LowOpticMat() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_CrossHairObj() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_CrossHairHud() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_HighMaterials() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_NomalMaterials() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& FinishAimingPercentage() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_OwnerWeapon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_ProcessFail() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_CrossHairAssetID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_CrossHairIndex() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_CrossHairCustomID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_CrossHairMaterialID() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_NextAimState() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_CurAimState() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& ChangePercent_1PMode_Open() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& ChangePercent_1PMode_Close() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> static T& ChangePercent_3PMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_CurPercent() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& m_IsChange() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCrossHairInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCrossHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Release() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowHighMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideHighMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceHideNormalMeshRendererInAimmingOpenState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceHideNormalMeshRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayShowHighMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayHideHighMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOrHideCrossHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChangePercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HighMeshChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshCrossHairRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = void> T SetCrossHairInfo(int32_t assetID, int32_t index, int32_t customID) {
		return ((T (*)(OpticsAvatarChangeComponent*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x27216F4))(this, assetID, index, customID);
	}
	template <typename T = void> T Init(uintptr_t ownerWeapon) {
		return ((T (*)(OpticsAvatarChangeComponent*, uintptr_t))(Il2CppBase() + 0x2721840))(this, ownerWeapon);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(OpticsAvatarChangeComponent*))(Il2CppBase() + 0x27218F8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(OpticsAvatarChangeComponent*))(Il2CppBase() + 0x2721B94))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(OpticsAvatarChangeComponent*))(Il2CppBase() + 0x2721E48))(this);
	}
	template <typename T = void> T InitCrossHair() {
		return ((T (*)(OpticsAvatarChangeComponent*))(Il2CppBase() + 0x27220FC))(this);
	}
	template <typename T = void> T Release() {
		return ((T (*)(OpticsAvatarChangeComponent*))(Il2CppBase() + 0x27226E8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(OpticsAvatarChangeComponent*))(Il2CppBase() + 0x27228B8))(this);
	}
	template <typename T = void> T ShowHighMesh() {
		return ((T (*)(OpticsAvatarChangeComponent*))(Il2CppBase() + 0x2721A30))(this);
	}
	template <typename T = void> T HideHighMesh() {
		return ((T (*)(OpticsAvatarChangeComponent*))(Il2CppBase() + 0x2721AE0))(this);
	}
	template <typename T = void> T ForceHideNormalMeshRendererInAimmingOpenState() {
		return ((T (*)(OpticsAvatarChangeComponent*))(Il2CppBase() + 0x2722A1C))(this);
	}
	template <typename T = void> T ForceHideNormalMeshRenderer() {
		return ((T (*)(OpticsAvatarChangeComponent*))(Il2CppBase() + 0x2722C40))(this);
	}
	template <typename T = void> T DelayShowHighMesh() {
		return ((T (*)(OpticsAvatarChangeComponent*))(Il2CppBase() + 0x2722D58))(this);
	}
	template <typename T = void> T DelayHideHighMesh() {
		return ((T (*)(OpticsAvatarChangeComponent*))(Il2CppBase() + 0x27231B8))(this);
	}
	template <typename T = void> T ShowOrHideCrossHair(bool value) {
		return ((T (*)(OpticsAvatarChangeComponent*, bool))(Il2CppBase() + 0x2723094))(this, value);
	}
	template <typename T = void> T SetChangePercent(float openValue, float closeValue) {
		return ((T (*)(OpticsAvatarChangeComponent*, float, float))(Il2CppBase() + 0x2723468))(this, openValue, closeValue);
	}
	template <typename T = float> T get_ChangePercent_Open() {
		return ((T (*)(OpticsAvatarChangeComponent*))(Il2CppBase() + 0x2723534))(this);
	}
	template <typename T = float> T get_ChangePercent_Close() {
		return ((T (*)(OpticsAvatarChangeComponent*))(Il2CppBase() + 0x2723608))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(OpticsAvatarChangeComponent*, float))(Il2CppBase() + 0x27236DC))(this, DeltaTime);
	}
	template <typename T = void> T HighMeshChange() {
		return ((T (*)(OpticsAvatarChangeComponent*))(Il2CppBase() + 0x27239F8))(this);
	}
	template <typename T = void> T RefreshCrossHairRotation() {
		return ((T (*)(OpticsAvatarChangeComponent*))(Il2CppBase() + 0x2723AD0))(this);
	}

};

}
