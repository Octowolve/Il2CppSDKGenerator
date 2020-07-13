#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AssetBundleLoaderHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AssetBundleLoaderHandler"));
	}

	template <typename T = Il2CppString*> static T& m_PatchObbPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int64_t>*> static T& m_PatchObbOffsetDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadFromFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadFromFileAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPatchObbOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZipFileOffsetDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> static T LoadFromFile(Il2CppString* path, uint64_t offset) {
		return ((T (*)(void *, Il2CppString*, uint64_t))(Il2CppBase() + 0x2B6E35C))(0, path, offset);
	}
	template <typename T = uintptr_t> static T LoadFromFileAsync(Il2CppString* path, uint64_t offset) {
		return ((T (*)(void *, Il2CppString*, uint64_t))(Il2CppBase() + 0x2B76254))(0, path, offset);
	}
	template <typename T = Il2CppString*> static T get_PatchObbPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B69A54))(0);
	}
	template <typename T = uint64_t> static T GetPatchObbOffset(Il2CppString* filePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2B698F0))(0, filePath);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int64_t>*> static T GetZipFileOffsetDic(Il2CppString* zipFilePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2B79D78))(0, zipFilePath);
	}

};

}
