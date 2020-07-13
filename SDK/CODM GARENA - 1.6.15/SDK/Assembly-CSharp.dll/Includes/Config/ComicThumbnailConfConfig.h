#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ComicThumbnailConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ComicThumbnailConfConfig"));
	}

	template <typename T = int32_t> T& ComicId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& SeasonId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& SeasonSeq() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& UnlockTimeByStr() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& SeasonSeqName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& ThumbnailCdn() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ComicThumbnailConfConfig*))(Il2CppBase() + 0x462C7C0))(this);
	}
	template <typename T = int32_t> T get_ComicId() {
		return ((T (*)(ComicThumbnailConfConfig*))(Il2CppBase() + 0x462C860))(this);
	}
	template <typename T = void> T set_ComicId(int32_t value) {
		return ((T (*)(ComicThumbnailConfConfig*, int32_t))(Il2CppBase() + 0x462C868))(this, value);
	}
	template <typename T = int32_t> T get_SeasonId() {
		return ((T (*)(ComicThumbnailConfConfig*))(Il2CppBase() + 0x462C870))(this);
	}
	template <typename T = void> T set_SeasonId(int32_t value) {
		return ((T (*)(ComicThumbnailConfConfig*, int32_t))(Il2CppBase() + 0x462C878))(this, value);
	}
	template <typename T = int32_t> T get_SeasonSeq() {
		return ((T (*)(ComicThumbnailConfConfig*))(Il2CppBase() + 0x462C880))(this);
	}
	template <typename T = void> T set_SeasonSeq(int32_t value) {
		return ((T (*)(ComicThumbnailConfConfig*, int32_t))(Il2CppBase() + 0x462C888))(this, value);
	}
	template <typename T = Il2CppString*> T get_UnlockTimeByStr() {
		return ((T (*)(ComicThumbnailConfConfig*))(Il2CppBase() + 0x462C890))(this);
	}
	template <typename T = void> T set_UnlockTimeByStr(Il2CppString* value) {
		return ((T (*)(ComicThumbnailConfConfig*, Il2CppString*))(Il2CppBase() + 0x462C898))(this, value);
	}
	template <typename T = Il2CppString*> T get_SeasonSeqName() {
		return ((T (*)(ComicThumbnailConfConfig*))(Il2CppBase() + 0x462C8A0))(this);
	}
	template <typename T = void> T set_SeasonSeqName(Il2CppString* value) {
		return ((T (*)(ComicThumbnailConfConfig*, Il2CppString*))(Il2CppBase() + 0x462C8A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_ThumbnailCdn() {
		return ((T (*)(ComicThumbnailConfConfig*))(Il2CppBase() + 0x462C8B0))(this);
	}
	template <typename T = void> T set_ThumbnailCdn(Il2CppString* value) {
		return ((T (*)(ComicThumbnailConfConfig*, Il2CppString*))(Il2CppBase() + 0x462C8B8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ComicThumbnailConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x462C8C0))(this, bytes, position);
	}

};

}
