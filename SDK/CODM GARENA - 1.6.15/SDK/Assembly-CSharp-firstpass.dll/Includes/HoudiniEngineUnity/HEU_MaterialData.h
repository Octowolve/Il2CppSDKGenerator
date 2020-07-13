#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUMaterialData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_MaterialData"));
	}

	template <typename T = uintptr_t> T& _material() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _materialSource() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _materialKey() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T IsExistingMaterial() {
		return ((T (*)(HEUMaterialData*))(Il2CppBase() + 0x2BDC4A4))(this);
	}
	template <typename T = void> T UpdateMaterialFromHoudini(uintptr_t materialInfo, Il2CppString* assetCacheFolderPath) {
		return ((T (*)(HEUMaterialData*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2BC955C))(this, materialInfo, assetCacheFolderPath);
	}
	template <typename T = Il2CppString*> static T GetTextureFileNameFromMaterialParam(uintptr_t session, int32_t nodeID, uintptr_t parmInfo) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x2BDC6B8))(0, session, nodeID, parmInfo);
	}
	template <typename T = bool> static T IsTransparentMaterial(uintptr_t session, int32_t nodeID, Il2CppArray<uintptr_t>* parameters) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2BDC4BC))(0, session, nodeID, parameters);
	}
	template <typename T = Il2CppString*> static T GetSupportedFileFormat(uintptr_t session, uintptr_t imageInfo) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BDD1AC))(0, session, imageInfo);
	}

};

}
