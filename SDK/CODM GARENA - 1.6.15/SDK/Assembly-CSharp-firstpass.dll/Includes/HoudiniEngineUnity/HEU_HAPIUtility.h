#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUHAPIUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_HAPIUtility"));
	}


	template <typename T = Il2CppString*> static T GetHoudiniEngineInstallationInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BAEF98))(0);
	}
	template <typename T = Il2CppString*> static T GetEnvironmentPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BAF048))(0);
	}
	template <typename T = bool> static T IsHoudiniAssetFile(Il2CppString* filePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BAF0D0))(0, filePath);
	}
	template <typename T = void> static T Log(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BAF280))(0, message);
	}
	template <typename T = void> static T LogWarning(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BAF328))(0, message);
	}
	template <typename T = void> static T LogError(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BAF3D0))(0, message);
	}
	template <typename T = Il2CppString*> static T LocateValidFilePath(uintptr_t inObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BAF478))(0, inObject);
	}
	template <typename T = Il2CppString*> static T LocateValidFilePath_1(Il2CppString* assetName, Il2CppString* inFilePath) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2BAF544))(0, assetName, inFilePath);
	}
	template <typename T = uintptr_t> static T InstantiateHDA(Il2CppString* filePath, Il2CppVector3 initialPosition, uintptr_t session, bool bBuildAsync) {
		return ((T (*)(void *, Il2CppString*, Il2CppVector3, uintptr_t, bool))(Il2CppBase() + 0x2BAF54C))(0, filePath, initialPosition, session, bBuildAsync);
	}
	template <typename T = bool> static T LoadHDAFile(uintptr_t session, Il2CppString* assetPath, uintptr_t* assetLibraryID, Il2CppArray<uintptr_t>** assetNames) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t*, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x2BAFD40))(0, session, assetPath, assetLibraryID, assetNames);
	}
	template <typename T = bool> static T CreateAndCookAssetNode(uintptr_t session, Il2CppString* assetName, bool bCookTemplatedGeos, uintptr_t* newAssetID) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool, uintptr_t*))(Il2CppBase() + 0x2BB0030))(0, session, assetName, bCookTemplatedGeos, newAssetID);
	}
	template <typename T = bool> static T CookNodeInHoudini(uintptr_t session, int32_t nodeID, bool bCookTemplatedGeos, Il2CppString* assetName) {
		return ((T (*)(void *, uintptr_t, int32_t, bool, Il2CppString*))(Il2CppBase() + 0x2BB0660))(0, session, nodeID, bCookTemplatedGeos, assetName);
	}
	template <typename T = bool> static T ProcessHoudiniCookStatus(uintptr_t session, Il2CppString* assetName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2BB02F4))(0, session, assetName);
	}
	template <typename T = uintptr_t> static T CreateNewAsset(uintptr_t assetType, Il2CppString* rootName, uintptr_t parentTransform, uintptr_t session, bool bBuildAsync) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2BB06C0))(0, assetType, rootName, parentTransform, session, bBuildAsync);
	}
	template <typename T = uintptr_t> static T CreateNewCurveAsset(uintptr_t parentTransform, uintptr_t session, bool bBuildAsync) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2BB0F5C))(0, parentTransform, session, bBuildAsync);
	}
	template <typename T = uintptr_t> static T CreateNewInputAsset(uintptr_t parentTransform, uintptr_t session, bool bBuildAsync) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2BB0FFC))(0, parentTransform, session, bBuildAsync);
	}
	template <typename T = void> static T DestroyChildren(uintptr_t inTransform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BB109C))(0, inTransform);
	}
	template <typename T = void> static T DestroyGameObject(uintptr_t gameObect, bool bRegisterUndo) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x2BB1604))(0, gameObect, bRegisterUndo);
	}
	template <typename T = void> static T DestroyChildrenWithComponent(uintptr_t gameObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E87E04))(0, gameObject);
	}
	template <typename T = bool> static T IsAssetValidInHoudini(uintptr_t session, int32_t assetID) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x2BB1630))(0, session, assetID);
	}
	template <typename T = uintptr_t> static T GetAssetInScene(int32_t assetID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2BB177C))(0, assetID);
	}
	template <typename T = void> static T ApplyWorldTransfromFromHoudiniToUnity(uintptr_t hapiTransform, uintptr_t unityTransform) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BB1908))(0, hapiTransform, unityTransform);
	}
	template <typename T = void> static T ApplyLocalTransfromFromHoudiniToUnity(uintptr_t hapiTransform, uintptr_t unityTransform) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BB1C48))(0, hapiTransform, unityTransform);
	}
	template <typename T = void> static T ApplyMatrixToLocalTransform(uintptr_t matrix, uintptr_t transform) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BB1EFC))(0, matrix, transform);
	}
	template <typename T = uintptr_t> static T GetMatrixFromHAPITransform(uintptr_t hapiTransform, bool bConvertToUnity) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x2BA37B0))(0, hapiTransform, bConvertToUnity);
	}
	template <typename T = Il2CppQuaternion> static T GetQuaternion(uintptr_t m) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BB1F94))(0, m);
	}
	template <typename T = Il2CppVector3> static T GetPosition(uintptr_t m) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BA3B88))(0, m);
	}
	template <typename T = void> static T SetMatrixPosition(uintptr_t m, uintptr_t position) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BB242C))(0, m, position);
	}
	template <typename T = Il2CppVector3> static T GetScale(uintptr_t m) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BA3BD8))(0, m);
	}
	template <typename T = uintptr_t> static T GetHAPITransformFromMatrix(uintptr_t mat) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BB2488))(0, mat);
	}
	template <typename T = uintptr_t> static T GetHAPITransform(uintptr_t p, uintptr_t r, uintptr_t s) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BB279C))(0, p, r, s);
	}
	template <typename T = uintptr_t> static T GetMatrix4x4(uintptr_t p, uintptr_t r, uintptr_t s) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BB2A20))(0, p, r, s);
	}
	template <typename T = bool> static T IsSameTransform(uintptr_t transformMatrix, uintptr_t p, uintptr_t r, uintptr_t s) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BB2B8C))(0, transformMatrix, p, r, s);
	}
	template <typename T = bool> static T DoesGeoPartHaveAttribute(uintptr_t session, int32_t geoID, int32_t partID, Il2CppString* attrName, uintptr_t owner, uintptr_t attributeInfo) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BB2D50))(0, session, geoID, partID, attrName, owner, attributeInfo);
	}
	template <typename T = void> static T SetAnimationCurveTangentModes(uintptr_t animCurve, Il2CppList<int32_t>* tangentValues) {
		return ((T (*)(void *, uintptr_t, Il2CppList<int32_t>*))(Il2CppBase() + 0x2BB2DC8))(0, animCurve, tangentValues);
	}

};

}
