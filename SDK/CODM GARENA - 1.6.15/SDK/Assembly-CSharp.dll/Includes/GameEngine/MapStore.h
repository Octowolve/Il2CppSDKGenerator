#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MapStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MapStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& Maps() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Levels() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& ScenePaths() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_SceneNameLogin() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& m_SceneNameNoLogin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_SceneNameFrontEnd() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& m_SceneNameLoading() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScenePaths() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSceneNameLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSceneInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSceneNameNoLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSceneNameFrontEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSceneNameLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BelongsToMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSingleSceneLevelName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSingleSceneLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelInfoByMapID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLevelValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSingleSceneName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSceneAssetPathByMapID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetTagByMapID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMapID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMapIDByLevelName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = Il2CppList<Il2CppString*>*> T GetScenePaths() {
		return ((T (*)(MapStore*))(Il2CppBase() + 0x4AA616C))(this);
	}
	template <typename T = void> T Serialize(uintptr_t bw) {
		return ((T (*)(MapStore*, uintptr_t))(Il2CppBase() + 0x4AA657C))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(MapStore*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4AA6910))(this, bytes, position);
	}
	template <typename T = Il2CppString*> T GetSceneNameLogin() {
		return ((T (*)(MapStore*))(Il2CppBase() + 0x4AA6C10))(this);
	}
	template <typename T = Il2CppString*> T GetSceneInit() {
		return ((T (*)(MapStore*))(Il2CppBase() + 0x4AA6E1C))(this);
	}
	template <typename T = Il2CppString*> T GetSceneNameNoLogin() {
		return ((T (*)(MapStore*))(Il2CppBase() + 0x4AA6ED4))(this);
	}
	template <typename T = Il2CppString*> T GetSceneNameFrontEnd() {
		return ((T (*)(MapStore*))(Il2CppBase() + 0x4AA70EC))(this);
	}
	template <typename T = Il2CppString*> T GetSceneNameLoading() {
		return ((T (*)(MapStore*))(Il2CppBase() + 0x4AA7230))(this);
	}
	template <typename T = bool> T BelongsToMap(int32_t mapID, Il2CppString* scenePath) {
		return ((T (*)(MapStore*, int32_t, Il2CppString*))(Il2CppBase() + 0x4AA7374))(this, mapID, scenePath);
	}
	template <typename T = Il2CppString*> T GetSingleSceneLevelName(Il2CppString* scenePath) {
		return ((T (*)(MapStore*, Il2CppString*))(Il2CppBase() + 0x4AA7520))(this, scenePath);
	}
	template <typename T = uintptr_t> T GetSingleSceneLevel(Il2CppString* scenePath) {
		return ((T (*)(MapStore*, Il2CppString*))(Il2CppBase() + 0x4AA75E0))(this, scenePath);
	}
	template <typename T = uintptr_t> T GetLevelInfoByMapID(int32_t mapID) {
		return ((T (*)(MapStore*, int32_t))(Il2CppBase() + 0x4A9D664))(this, mapID);
	}
	template <typename T = uintptr_t> T GetLevelInfo(Il2CppString* levelName) {
		return ((T (*)(MapStore*, Il2CppString*))(Il2CppBase() + 0x4AA1DE4))(this, levelName);
	}
	template <typename T = bool> T IsLevelValid(Il2CppString* levelName) {
		return ((T (*)(MapStore*, Il2CppString*))(Il2CppBase() + 0x4AA7760))(this, levelName);
	}
	template <typename T = Il2CppString*> T GetSingleSceneName(int32_t mapID) {
		return ((T (*)(MapStore*, int32_t))(Il2CppBase() + 0x4AA6D54))(this, mapID);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetSceneAssetPathByMapID(int32_t inMapID) {
		return ((T (*)(MapStore*, int32_t))(Il2CppBase() + 0x4AA7818))(this, inMapID);
	}
	template <typename T = Il2CppString*> T GetAssetTagByMapID(int32_t mapID) {
		return ((T (*)(MapStore*, int32_t))(Il2CppBase() + 0x4AA78D8))(this, mapID);
	}
	template <typename T = int32_t> T GetMapID(Il2CppString* mapName) {
		return ((T (*)(MapStore*, Il2CppString*))(Il2CppBase() + 0x4AA7998))(this, mapName);
	}
	template <typename T = uintptr_t> T GetMapInfo(int32_t mapID) {
		return ((T (*)(MapStore*, int32_t))(Il2CppBase() + 0x4AA1C74))(this, mapID);
	}
	template <typename T = int32_t> T GetMapIDByLevelName(Il2CppString* levelName) {
		return ((T (*)(MapStore*, Il2CppString*))(Il2CppBase() + 0x4AA7B28))(this, levelName);
	}

};

}
