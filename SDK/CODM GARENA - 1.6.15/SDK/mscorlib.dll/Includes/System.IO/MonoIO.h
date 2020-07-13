#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class MonoIO
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "MonoIO"));
	}

	template <typename T = uintptr_t> static T& InvalidFileAttributes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& InvalidHandle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T GetException(uintptr_t error) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FF0390))(0, error);
	}
	template <typename T = uintptr_t> static T GetException_1(Il2CppString* path, uintptr_t error) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FEE710))(0, path, error);
	}
	template <typename T = bool> static T CreateDirectory(Il2CppString* path, uintptr_t* error) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x3FEE704))(0, path, error);
	}
	template <typename T = bool> static T RemoveDirectory(Il2CppString* path, uintptr_t* error) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x3FEF6F0))(0, path, error);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetFileSystemEntries(Il2CppString* path, Il2CppString* path_with_pattern, int32_t attrs, int32_t mask, uintptr_t* error) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x3FF14F0))(0, path, path_with_pattern, attrs, mask, error);
	}
	template <typename T = Il2CppString*> static T GetCurrentDirectory(uintptr_t* error) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x3FF0388))(0, error);
	}
	template <typename T = bool> static T MoveFile(Il2CppString* path, Il2CppString* dest, uintptr_t* error) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x3FF5094))(0, path, dest, error);
	}
	template <typename T = bool> static T CopyFile(Il2CppString* path, Il2CppString* dest, bool overwrite, uintptr_t* error) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, bool, uintptr_t*))(Il2CppBase() + 0x3FF4228))(0, path, dest, overwrite, error);
	}
	template <typename T = bool> static T DeleteFile(Il2CppString* path, uintptr_t* error) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x3FEF6E4))(0, path, error);
	}
	template <typename T = uintptr_t> static T GetFileAttributes(Il2CppString* path, uintptr_t* error) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x3FF4330))(0, path, error);
	}
	template <typename T = bool> static T SetFileAttributes(Il2CppString* path, uintptr_t attrs, uintptr_t* error) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3FF54C4))(0, path, attrs, error);
	}
	template <typename T = uintptr_t> static T GetFileType(uintptr_t handle, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3FF7F24))(0, handle, error);
	}
	template <typename T = bool> static T Exists(Il2CppString* path, uintptr_t* error) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x3FF3EBC))(0, path, error);
	}
	template <typename T = bool> static T ExistsFile(Il2CppString* path, uintptr_t* error) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x3FF1410))(0, path, error);
	}
	template <typename T = bool> static T ExistsDirectory(Il2CppString* path, uintptr_t* error) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x3FF0178))(0, path, error);
	}
	template <typename T = bool> static T ExistsSymlink(Il2CppString* path, uintptr_t* error) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x3FEF60C))(0, path, error);
	}
	template <typename T = bool> static T GetFileStat(Il2CppString* path, uintptr_t* stat, uintptr_t* error) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3FF46C8))(0, path, stat, error);
	}
	template <typename T = uintptr_t> static T Open(Il2CppString* filename, uintptr_t mode, uintptr_t access, uintptr_t share, uintptr_t options, uintptr_t* error) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3FF8F40))(0, filename, mode, access, share, options, error);
	}
	template <typename T = bool> static T Close(uintptr_t handle, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3FFC994))(0, handle, error);
	}
	template <typename T = int32_t> static T Read(uintptr_t handle, Il2CppArray<uintptr_t>* dest, int32_t dest_offset, int32_t count, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x3FFC9A0))(0, handle, dest, dest_offset, count, error);
	}
	template <typename T = int32_t> static T Write(uintptr_t handle, Il2CppArray<uintptr_t>* src, int32_t src_offset, int32_t count, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x3FFAF80))(0, handle, src, src_offset, count, error);
	}
	template <typename T = int64_t> static T Seek(uintptr_t handle, int64_t offset, uintptr_t origin, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, int64_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3FF8098))(0, handle, offset, origin, error);
	}
	template <typename T = int64_t> static T GetLength(uintptr_t handle, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3FF91FC))(0, handle, error);
	}
	template <typename T = bool> static T SetLength(uintptr_t handle, int64_t length, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, int64_t, uintptr_t*))(Il2CppBase() + 0x3FFC548))(0, handle, length, error);
	}
	template <typename T = bool> static T SetFileTime(uintptr_t handle, int64_t creation_time, int64_t last_access_time, int64_t last_write_time, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, int64_t, int64_t, int64_t, uintptr_t*))(Il2CppBase() + 0x3FFEA3C))(0, handle, creation_time, last_access_time, last_write_time, error);
	}
	template <typename T = bool> static T SetLastWriteTime(Il2CppString* path, uintptr_t dateTime, uintptr_t* error) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3FF5650))(0, path, dateTime, error);
	}
	template <typename T = bool> static T SetFileTime_1(Il2CppString* path, int32_t type, int64_t creation_time, int64_t last_access_time, int64_t last_write_time, uintptr_t dateTime, uintptr_t* error) {
		return ((T (*)(void *, Il2CppString*, int32_t, int64_t, int64_t, int64_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3FFEA44))(0, path, type, creation_time, last_access_time, last_write_time, dateTime, error);
	}
	template <typename T = uintptr_t> static T get_ConsoleOutput() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FFEC28))(0);
	}
	template <typename T = uintptr_t> static T get_ConsoleInput() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FFEC2C))(0);
	}
	template <typename T = uintptr_t> static T get_ConsoleError() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FFEC30))(0);
	}
	template <typename T = char> static T get_VolumeSeparatorChar() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FFEC34))(0);
	}
	template <typename T = char> static T get_DirectorySeparatorChar() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FFEC38))(0);
	}
	template <typename T = char> static T get_AltDirectorySeparatorChar() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FFEC3C))(0);
	}
	template <typename T = char> static T get_PathSeparator() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FFEC40))(0);
	}

};

}
