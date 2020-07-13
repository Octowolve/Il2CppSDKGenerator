#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUGeneralUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_GeneralUtility"));
	}


	template <typename T = bool> static T GetArray1Arg(int32_t arg1, void* func, Il2CppArray<uintptr_t>** data, int32_t start, int32_t count) {
		return ((T (*)(void *, int32_t, void*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x1BA2490))(0, arg1, func, data, start, count);
	}
	template <typename T = bool> static T GetArray2Arg(int32_t arg1, uintptr_t arg2, void* func, Il2CppArray<uintptr_t>** data, int32_t start, int32_t count) {
		return ((T (*)(void *, int32_t, uintptr_t, void*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x1BA25F0))(0, arg1, arg2, func, data, start, count);
	}
	template <typename T = bool> static T GetArray(int32_t arg1, uintptr_t arg2, void* func1, void* func2, Il2CppArray<uintptr_t>** data, int32_t start, int32_t count, int32_t tupleSize) {
		return ((T (*)(void *, int32_t, uintptr_t, void*, void*, Il2CppArray<uintptr_t>**, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1BA1F94))(0, arg1, arg2, func1, func2, data, start, count, tupleSize);
	}
	template <typename T = bool> static T SetArray1Arg(int32_t arg1, void* func, Il2CppArray<uintptr_t>** data, int32_t start, int32_t count) {
		return ((T (*)(void *, int32_t, void*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x1BA38D4))(0, arg1, func, data, start, count);
	}
	template <typename T = bool> static T SetArray2Arg(int32_t arg1, uintptr_t arg2, void* func, Il2CppArray<uintptr_t>** data, int32_t start, int32_t count) {
		return ((T (*)(void *, int32_t, uintptr_t, void*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x1BA3984))(0, arg1, arg2, func, data, start, count);
	}
	template <typename T = bool> static T SetArray(int32_t arg1, uintptr_t arg2, void* func1, void* func2, Il2CppArray<uintptr_t>** data, int32_t start, int32_t count, int32_t tupleSize) {
		return ((T (*)(void *, int32_t, uintptr_t, void*, void*, Il2CppArray<uintptr_t>**, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1BA3590))(0, arg1, arg2, func1, func2, data, start, count, tupleSize);
	}
	template <typename T = bool> static T DoArrayElementsMatch(Il2CppArray<uintptr_t>* array1, Il2CppArray<uintptr_t>* array2) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1BA0068))(0, array1, array2);
	}
	template <typename T = bool> static T DoArrayElementsMatch_1(Il2CppArray<uintptr_t>* array1, int32_t startOffset1, Il2CppArray<uintptr_t>* array2, int32_t startOffset2, int32_t length) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x1B9FF0C))(0, array1, startOffset1, array2, startOffset2, length);
	}
	template <typename T = bool> static T GetAttributeArray(int32_t geoID, int32_t partID, Il2CppString* name, uintptr_t info, Il2CppArray<uintptr_t>* items, void* getFunc, int32_t count) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*, void*, int32_t))(Il2CppBase() + 0x1BA2928))(0, geoID, partID, name, info, items, getFunc, count);
	}
	template <typename T = void> static T GetAttribute(uintptr_t session, int32_t geoID, int32_t partID, Il2CppString* name, uintptr_t info, Il2CppArray<uintptr_t>* data, void* getFunc) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x1E87B3C))(0, session, geoID, partID, name, info, data, getFunc);
	}
	template <typename T = void> static T GetAttributeStringDataHelper(uintptr_t session, int32_t geoID, int32_t partID, Il2CppString* name, uintptr_t info, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C6ECD8))(0, session, geoID, partID, name, info, data);
	}
	template <typename T = bool> static T SetAttributeArray(int32_t geoID, int32_t partID, Il2CppString* attrName, uintptr_t attrInfo, Il2CppArray<uintptr_t>* items, void* setFunc, int32_t count) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*, void*, int32_t))(Il2CppBase() + 0x1BA3EC0))(0, geoID, partID, attrName, attrInfo, items, setFunc, count);
	}
	template <typename T = bool> static T SetAttribute(int32_t geoID, int32_t partID, Il2CppString* attrName, uintptr_t attrInfo, Il2CppArray<uintptr_t>* items, void* setFunc) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x1BA39D8))(0, geoID, partID, attrName, attrInfo, items, setFunc);
	}
	template <typename T = bool> static T CheckAttributeExists(uintptr_t session, int32_t geoID, int32_t partID, Il2CppString* attribName, uintptr_t attribOwner) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4C6EF7C))(0, session, geoID, partID, attribName, attribOwner);
	}
	template <typename T = bool> static T GetAttributeInfo(uintptr_t session, int32_t geoID, int32_t partID, Il2CppString* attribName, uintptr_t attribInfo) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4C6F0A4))(0, session, geoID, partID, attribName, attribInfo);
	}
	template <typename T = void> static T CopyWorldTransformValues(uintptr_t src, uintptr_t dest) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C6F144))(0, src, dest);
	}
	template <typename T = void> static T CopyLocalTransformValues(uintptr_t src, uintptr_t dest) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C6F1F0))(0, src, dest);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetChildGameObjects(uintptr_t parentGO) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C6F29C))(0, parentGO);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetChildGameObjectsWithNamePattern(uintptr_t parentGO, Il2CppString* pattern, bool bExclude) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x4C6F5F8))(0, parentGO, pattern, bExclude);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetInstanceChildObjects(uintptr_t parentGO) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C6F9D8))(0, parentGO);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetNonInstanceChildObjects(uintptr_t parentGO) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C6FA68))(0, parentGO);
	}
	template <typename T = uintptr_t> static T GetGameObjectByName(Il2CppList<uintptr_t>* goList, Il2CppString* name) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x4C6FAF8))(0, goList, name);
	}
	template <typename T = uintptr_t> static T GetOrCreateComponent(uintptr_t gameObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x335A44C))(0, gameObject);
	}
	template <typename T = void> static T DestroyGeneratedComponents(uintptr_t gameObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C6FCF4))(0, gameObject);
	}
	template <typename T = void> static T DestroyComponent(uintptr_t gameObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E878D0))(0, gameObject);
	}
	template <typename T = void> static T DestroyImmediate(uintptr_t obj, bool bAllowDestroyingAssets, bool bRegisterUndo) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0x4C6FE08))(0, obj, bAllowDestroyingAssets, bRegisterUndo);
	}
	template <typename T = void> static T DestroyBakedGameObjects(Il2CppList<uintptr_t>* gameObjectsToDestroy) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4C6FEC4))(0, gameObjectsToDestroy);
	}
	template <typename T = void> static T DestroyBakedGameObjectsWithEndName(Il2CppList<uintptr_t>* gameObjectsToDestroy, Il2CppString* endName) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x4C6FECC))(0, gameObjectsToDestroy, endName);
	}
	template <typename T = void> static T DestroyLODGroup(uintptr_t targetGO, bool bDontDeletePersistantResources) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4C70354))(0, targetGO, bDontDeletePersistantResources);
	}
	template <typename T = void> static T DestroyGeneratedMeshMaterialsLODGroups(uintptr_t targetGO, bool bDontDeletePersistantResources) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4C70078))(0, targetGO, bDontDeletePersistantResources);
	}
	template <typename T = void> static T DestroyGeneratedMaterial(uintptr_t material) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C7074C))(0, material);
	}
	template <typename T = void> static T DestroyMeshCollider(uintptr_t gameObject, bool bDontDeletePersistantResources) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4C70574))(0, gameObject, bDontDeletePersistantResources);
	}
	template <typename T = void> static T SetGameObjectRenderVisiblity(uintptr_t gameObject, bool bVisible) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4C708F0))(0, gameObject, bVisible);
	}
	template <typename T = void> static T SetGameObjectColliderState(uintptr_t gameObject, bool bEnabled) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4C709F0))(0, gameObject, bEnabled);
	}
	template <typename T = Il2CppString*> static T ColorToString(uintptr_t c) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C70AF0))(0, c);
	}
	template <typename T = uintptr_t> static T StringToColor(Il2CppString* colorString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C70DDC))(0, colorString);
	}
	template <typename T = bool> static T DoesUnityTagExist(Il2CppString* tagName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C70FA4))(0, tagName);
	}
	template <typename T = void> static T SetLayer(uintptr_t rootGO, int32_t layer, bool bIncludeChildren) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4C70FAC))(0, rootGO, layer, bIncludeChildren);
	}
	template <typename T = bool> static T IsMouseWithinSceneView(uintptr_t camera, Il2CppVector2 mousePosition) {
		return ((T (*)(void *, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x4C710D8))(0, camera, mousePosition);
	}
	template <typename T = bool> static T IsMouseOverRect(uintptr_t camera, Il2CppVector2 mousePosition, uintptr_t rect) {
		return ((T (*)(void *, uintptr_t, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x4C71178))(0, camera, mousePosition, rect);
	}
	template <typename T = uintptr_t> static T GetSystemTypeByName(Il2CppString* typeName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C711D4))(0, typeName);
	}
	template <typename T = void> static T AssignUnityTag(uintptr_t session, int32_t geoID, int32_t partID, uintptr_t gameObject) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x4C71294))(0, session, geoID, partID, gameObject);
	}
	template <typename T = void> static T MakeStaticIfHasAttribute(uintptr_t session, int32_t geoID, int32_t partID, uintptr_t gameObject) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x4C716C4))(0, session, geoID, partID, gameObject);
	}
	template <typename T = Il2CppString*> static T GetUnityScriptAttributeValue(uintptr_t session, int32_t geoID, int32_t partID) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4C71894))(0, session, geoID, partID);
	}
	template <typename T = void> static T AttachScriptWithInvokeFunction(Il2CppString* scriptSet, uintptr_t gameObject) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4C71BD8))(0, scriptSet, gameObject);
	}
	template <typename T = bool> static T IsInCameraView(uintptr_t camera, Il2CppVector3 point) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4C71E9C))(0, camera, point);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T FindOrGenerateHandles(uintptr_t session, uintptr_t assetInfo, int32_t assetID, Il2CppString* assetName, uintptr_t parameters, Il2CppList<uintptr_t>* currentHandles) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, Il2CppString*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4C71F44))(0, session, assetInfo, assetID, assetName, parameters, currentHandles);
	}
	template <typename T = void> static T CopyComponents(uintptr_t srcGO, uintptr_t destGO) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C724DC))(0, srcGO, destGO);
	}
	template <typename T = int32_t> static T GetParentNodeId(uintptr_t session, int32_t nodeID) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4C724E0))(0, session, nodeID);
	}
	template <typename T = int32_t> static T HapiFindParameterByNameOrTag(uintptr_t session, uintptr_t NodeId, Il2CppString* ParmName, uintptr_t FoundParmInfo) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4C72608))(0, session, NodeId, ParmName, FoundParmInfo);
	}
	template <typename T = int32_t> static T HapiFindParameterByNameOrTag_1(uintptr_t session, uintptr_t NodeId, Il2CppString* ParamName) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4C727C0))(0, session, NodeId, ParamName);
	}

};

}
