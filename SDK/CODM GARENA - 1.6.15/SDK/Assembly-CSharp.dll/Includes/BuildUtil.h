#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildUtil"));
	}

	template <typename T = Il2CppString*> static T& __persistent_path() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ExtractFolderName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& __persistent_extract_path() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& PufferFolderName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& __persistent_puffer_path() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& __persistent_assetbundle_path() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& __persistent_dynamic_assetbundle_path() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& __persistent_config_path() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& __project_parent_path() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& __resources_folder_path() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppString*> static T& SettlementDataFolderName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& __persistent_settlementdata_path() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& VERSION_COMPARE_EQUAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& VERSION_COMPARE_LOWER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& VERSION_COMPARE_HIGHER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& VERSION_COMPARE_ERROR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPersistentDataPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPersistentExtractPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPersistentPufferPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPersistentAssetbundlePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPersistentDynamicAssetbundlePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPersistentConfigPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTempCacheFolderPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProjectAssetsPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProjectPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetResourcesFolderPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStreamingAssetsPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPhysicalPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPhysicalPathFromAssetPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPhysicalPathFromProjectPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetPathFromPhysicalPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstSourceIFSName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndExtractIFSResFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPersistentSettlementDataPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadFileText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveFileText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveEncryptedFileText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveFileBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveScreenShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DirectoryCopy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DirectoryCopyAndEncrypt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalDirectoryCopy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DirectoryDelete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillLengthHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_FillLengthHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFileSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSplitedFilePathList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateFileMD5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateMD5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatMD5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFileFormatMD5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExportAssetbundleFolders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateRandom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRandomParamsUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PackAssetBundlesToIFS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExtractIFSResFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessShellCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTextureLegit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPowerOfTwo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VersionCompare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}

	template <typename T = Il2CppString*> static T GetPersistentDataPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x53046E8))(0);
	}
	template <typename T = Il2CppString*> static T GetPersistentExtractPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x53048E0))(0);
	}
	template <typename T = Il2CppString*> static T GetPersistentPufferPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x5304CB0))(0);
	}
	template <typename T = Il2CppString*> static T GetPersistentAssetbundlePath() {
		return ((T (*)(void *))(Il2CppBase() + 0x5304EF8))(0);
	}
	template <typename T = Il2CppString*> static T GetPersistentDynamicAssetbundlePath() {
		return ((T (*)(void *))(Il2CppBase() + 0x5305140))(0);
	}
	template <typename T = Il2CppString*> static T GetPersistentConfigPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x5305388))(0);
	}
	template <typename T = Il2CppString*> static T GetTempCacheFolderPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x53055D0))(0);
	}
	template <typename T = Il2CppString*> static T GetProjectAssetsPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x5305800))(0);
	}
	template <typename T = Il2CppString*> static T GetProjectPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x53058D0))(0);
	}
	template <typename T = Il2CppString*> static T GetResourcesFolderPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x5305AC8))(0);
	}
	template <typename T = Il2CppString*> static T GetStreamingAssetsPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x5305D14))(0);
	}
	template <typename T = Il2CppString*> static T GetPhysicalPath(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x5305DE4))(0, path);
	}
	template <typename T = Il2CppString*> static T GetPhysicalPathFromAssetPath(Il2CppString* assetPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x5305ED8))(0, assetPath);
	}
	template <typename T = Il2CppString*> static T GetPhysicalPathFromProjectPath(Il2CppString* relativePathToProjectRoot) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x5306020))(0, relativePathToProjectRoot);
	}
	template <typename T = Il2CppString*> static T FormatPath(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x5304B28))(0, path);
	}
	template <typename T = Il2CppString*> static T GetAssetPathFromPhysicalPath(Il2CppString* phyPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x5306168))(0, phyPath);
	}
	template <typename T = Il2CppString*> static T GetFirstSourceIFSName() {
		return ((T (*)(void *))(Il2CppBase() + 0x53062E0))(0);
	}
	template <typename T = void> static T CheckAndExtractIFSResFile() {
		return ((T (*)(void *))(Il2CppBase() + 0x53063C0))(0);
	}
	template <typename T = Il2CppString*> static T GetPersistentSettlementDataPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x5306F84))(0);
	}
	template <typename T = Il2CppString*> static T LoadFileText(Il2CppString* fileName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x53071CC))(0, fileName);
	}
	template <typename T = void> static T SaveFileText(Il2CppString* fileName, Il2CppString* text, uintptr_t fileMode, bool deleteOldFile) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x5307318))(0, fileName, text, fileMode, deleteOldFile);
	}
	template <typename T = void> static T SaveEncryptedFileText(Il2CppString* fileName, Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x5307718))(0, fileName, text);
	}
	template <typename T = void> static T SaveFileBytes(Il2CppString* fileName, Il2CppArray<uintptr_t>* bytes, int32_t count) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x530796C))(0, fileName, bytes, count);
	}
	template <typename T = Il2CppString*> static T SaveScreenShot(uintptr_t texture, bool deleteOldFile) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x5307AE4))(0, texture, deleteOldFile);
	}
	template <typename T = void> static T DirectoryCopy(Il2CppString* sourceDirName, Il2CppString* destDirName) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x5307EE0))(0, sourceDirName, destDirName);
	}
	template <typename T = void> static T DirectoryCopyAndEncrypt(Il2CppString* sourceDirName, Il2CppString* destDirName) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x53086F0))(0, sourceDirName, destDirName);
	}
	template <typename T = void> static T InternalDirectoryCopy(bool encrypt, Il2CppString* sourceDirName, Il2CppString* destDirName, bool deleteExistParentFolder) {
		return ((T (*)(void *, bool, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x5307FF8))(0, encrypt, sourceDirName, destDirName, deleteExistParentFolder);
	}
	template <typename T = void> static T DirectoryDelete(Il2CppString* destDirName, bool reCreate) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x5308808))(0, destDirName, reCreate);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FillLengthHead(Il2CppArray<uintptr_t>* srcData) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5308ABC))(0, srcData);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FillLengthHead_1(Il2CppArray<uintptr_t>* srcData, uint16_t length) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uint16_t))(Il2CppBase() + 0x5308BC8))(0, srcData, length);
	}
	template <typename T = int64_t> static T GetFileSize(Il2CppString* physicalPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x5308D88))(0, physicalPath);
	}
	template <typename T = Il2CppList<Il2CppList<Il2CppString*>*>*> static T GetSplitedFilePathList(Il2CppString* folderPhysicalPath, float maxSizeOnePackageInMegaByte) {
		return ((T (*)(void *, Il2CppString*, float))(Il2CppBase() + 0x5308F28))(0, folderPhysicalPath, maxSizeOnePackageInMegaByte);
	}
	template <typename T = Il2CppString*> static T CreateFileMD5(Il2CppString* physicalPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x530938C))(0, physicalPath);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T CreateMD5(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x53097BC))(0, data);
	}
	template <typename T = Il2CppString*> static T FormatMD5(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5309610))(0, data);
	}
	template <typename T = Il2CppString*> static T GetFileFormatMD5(Il2CppString* file) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x5309994))(0, file);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetExportAssetbundleFolders() {
		return ((T (*)(void *))(Il2CppBase() + 0x5309CA4))(0);
	}
	template <typename T = uintptr_t> static T CreateRandom() {
		return ((T (*)(void *))(Il2CppBase() + 0x530A23C))(0);
	}
	template <typename T = Il2CppString*> static T GetRandomParamsUrl(Il2CppString* url) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x530A3B4))(0, url);
	}
	template <typename T = void> static T PackAssetBundlesToIFS(Il2CppString* abParentFolderAbsPath, Il2CppString* targetPackedPath, bool useLZMA) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x530A788))(0, abParentFolderAbsPath, targetPackedPath, useLZMA);
	}
	template <typename T = void> static T ExtractIFSResFile(Il2CppString* ifsFile, Il2CppString* ifsResFile) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x530AF3C))(0, ifsFile, ifsResFile);
	}
	template <typename T = void> static T ProcessShellCmd(Il2CppString* command, Il2CppString* arguments) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x530AB70))(0, command, arguments);
	}
	template <typename T = bool> static T IsTextureLegit(uintptr_t tex, Il2CppString* assetPath) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x530B25C))(0, tex, assetPath);
	}
	template <typename T = bool> static T IsPowerOfTwo(int32_t num) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x530B414))(0, num);
	}
	template <typename T = int32_t> static T VersionCompare(Il2CppString* A, Il2CppString* B) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x530B528))(0, A, B);
	}
	template <typename T = uintptr_t> static T GetExportAssetbundleFoldersm__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x530B810))(0, x);
	}
	template <typename T = int32_t> static T GetExportAssetbundleFoldersm__1(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x530B92C))(0, x);
	}
	template <typename T = Il2CppString*> static T GetExportAssetbundleFoldersm__2(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x530B934))(0, x);
	}

};

}
