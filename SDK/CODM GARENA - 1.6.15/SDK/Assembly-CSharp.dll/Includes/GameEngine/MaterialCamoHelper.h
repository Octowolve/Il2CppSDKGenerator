#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MaterialCamoHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MaterialCamoHelper"));
	}

	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SHADER_Prop_DetailMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SHADER_Prop_DetailAlbedoMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SHADER_Prop_DetialBlendMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SHADER_Keyword_DETAIL_MULX2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SHADER_Keyword_DETAIL_ADD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SHADER_Keyword_DETAIL_MUL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SHADER_Keyword_DETAIL_LERP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SHADER_Keyword_DETAIL_OVERLAY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SHADER_Keyword_DETAIL_DESATURATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SHADER_Keyword_DYNAMIC_OPAQUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SHADER_Keyword_DYNAMIC_DETAIL_LERP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SHADER_Keyword_DYNAMIC_EMISSION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SHADER_Keyword_DYNAMIC_EMISSION_DETAIL_LERP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableDetailLerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableDetailLerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCamo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCamo3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCamoProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveCamo3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveCamo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveCamoProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AAAABC))(0);
	}
	template <typename T = void> static T EnableDetailLerp(uintptr_t SrcMaterial, uintptr_t CamoTexture) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AAAC18))(0, SrcMaterial, CamoTexture);
	}
	template <typename T = void> static T DisableDetailLerp(uintptr_t SrcMaterial) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AAAE84))(0, SrcMaterial);
	}
	template <typename T = void> T DoCamo(uint32_t skinID, uint64_t objID, int32_t CamoID, uintptr_t RootMeshAsset) {
		return ((T (*)(MaterialCamoHelper*, uint32_t, uint64_t, int32_t, uintptr_t))(Il2CppBase() + 0x4AAB070))(this, skinID, objID, CamoID, RootMeshAsset);
	}
	template <typename T = uintptr_t> T DoCamo3P(uint32_t skinID, uint64_t objID, int32_t CamoID, uintptr_t RootMeshAsset) {
		return ((T (*)(MaterialCamoHelper*, uint32_t, uint64_t, int32_t, uintptr_t))(Il2CppBase() + 0x4AABB18))(this, skinID, objID, CamoID, RootMeshAsset);
	}
	template <typename T = bool> T DoCamoProcess(int32_t CamoID, uintptr_t RootMeshAsset, bool is1P) {
		return ((T (*)(MaterialCamoHelper*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x4AAB2F4))(this, CamoID, RootMeshAsset, is1P);
	}
	template <typename T = void> T RemoveCamo3P(uintptr_t RootMeshAsset, uintptr_t mainTexture) {
		return ((T (*)(MaterialCamoHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AABCB8))(this, RootMeshAsset, mainTexture);
	}
	template <typename T = void> T RemoveCamo(uintptr_t RootMeshAsset) {
		return ((T (*)(MaterialCamoHelper*, uintptr_t))(Il2CppBase() + 0x4AAB214))(this, RootMeshAsset);
	}
	template <typename T = void> T RemoveCamoProcess(uintptr_t RootMeshAsset) {
		return ((T (*)(MaterialCamoHelper*, uintptr_t))(Il2CppBase() + 0x4AABDB0))(this, RootMeshAsset);
	}

};

}
