#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class MatchEndLoadingBackGroundConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "MatchEndLoadingBackGroundConfig"));
	}

	template <typename T = Il2CppString*> T& _ModeId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _mode_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _MinLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _MaxLevel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _LocalSpriteName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _Url() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _BFullScreen() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _BCdn() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = Il2CppString*> T& _SpliteName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _BNoviceGuide() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<int32_t>*> T& _Width() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _Pivot() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<float>*> T& _X() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<float>*> T& _Y() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<float>*> T& _Z() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _LocId_Desc() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _Alignment() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _FontSize() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _FontStyle() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<bool>*> T& _isShowBlock() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& _StartTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& _EndTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& _GroupProp() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uint32_t> T& _StartTimestamp() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& _EndTimestamp() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = Il2CppString*> T get_ModeId() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA48E4))(this);
	}
	template <typename T = void> T set_ModeId(Il2CppString* value) {
		return ((T (*)(MatchEndLoadingBackGroundConfig*, Il2CppString*))(Il2CppBase() + 0x4EA48EC))(this, value);
	}
	template <typename T = uint32_t> T get_mode_id() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA48F4))(this);
	}
	template <typename T = void> T set_mode_id(uint32_t value) {
		return ((T (*)(MatchEndLoadingBackGroundConfig*, uint32_t))(Il2CppBase() + 0x4EA48FC))(this, value);
	}
	template <typename T = uint32_t> T get_MinLevel() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4904))(this);
	}
	template <typename T = void> T set_MinLevel(uint32_t value) {
		return ((T (*)(MatchEndLoadingBackGroundConfig*, uint32_t))(Il2CppBase() + 0x4EA490C))(this, value);
	}
	template <typename T = uint32_t> T get_MaxLevel() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4914))(this);
	}
	template <typename T = void> T set_MaxLevel(uint32_t value) {
		return ((T (*)(MatchEndLoadingBackGroundConfig*, uint32_t))(Il2CppBase() + 0x4EA491C))(this, value);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_LocalSpriteName() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4924))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_Url() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA492C))(this);
	}
	template <typename T = bool> T get_BFullScreen() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4934))(this);
	}
	template <typename T = void> T set_BFullScreen(bool value) {
		return ((T (*)(MatchEndLoadingBackGroundConfig*, bool))(Il2CppBase() + 0x4EA493C))(this, value);
	}
	template <typename T = bool> T get_BCdn() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4944))(this);
	}
	template <typename T = void> T set_BCdn(bool value) {
		return ((T (*)(MatchEndLoadingBackGroundConfig*, bool))(Il2CppBase() + 0x4EA494C))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpliteName() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4954))(this);
	}
	template <typename T = void> T set_SpliteName(Il2CppString* value) {
		return ((T (*)(MatchEndLoadingBackGroundConfig*, Il2CppString*))(Il2CppBase() + 0x4EA495C))(this, value);
	}
	template <typename T = bool> T get_BNoviceGuide() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4964))(this);
	}
	template <typename T = void> T set_BNoviceGuide(bool value) {
		return ((T (*)(MatchEndLoadingBackGroundConfig*, bool))(Il2CppBase() + 0x4EA496C))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_Width() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4974))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_Pivot() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA497C))(this);
	}
	template <typename T = Il2CppList<float>*> T get_X() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4984))(this);
	}
	template <typename T = Il2CppList<float>*> T get_Y() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA498C))(this);
	}
	template <typename T = Il2CppList<float>*> T get_Z() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4994))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_LocId_Desc() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA499C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_Alignment() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA49A4))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_FontSize() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA49AC))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_FontStyle() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA49B4))(this);
	}
	template <typename T = Il2CppList<bool>*> T get_isShowBlock() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA49BC))(this);
	}
	template <typename T = Il2CppString*> T get_StartTime() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA49C4))(this);
	}
	template <typename T = void> T set_StartTime(Il2CppString* value) {
		return ((T (*)(MatchEndLoadingBackGroundConfig*, Il2CppString*))(Il2CppBase() + 0x4EA49CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_EndTime() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA49D4))(this);
	}
	template <typename T = void> T set_EndTime(Il2CppString* value) {
		return ((T (*)(MatchEndLoadingBackGroundConfig*, Il2CppString*))(Il2CppBase() + 0x4EA49DC))(this, value);
	}
	template <typename T = uint32_t> T get_GroupProp() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA49E4))(this);
	}
	template <typename T = void> T set_GroupProp(uint32_t value) {
		return ((T (*)(MatchEndLoadingBackGroundConfig*, uint32_t))(Il2CppBase() + 0x4EA49EC))(this, value);
	}
	template <typename T = uint32_t> T get_StartTimestamp() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA49F4))(this);
	}
	template <typename T = void> T set_StartTimestamp(uint32_t value) {
		return ((T (*)(MatchEndLoadingBackGroundConfig*, uint32_t))(Il2CppBase() + 0x4EA49FC))(this, value);
	}
	template <typename T = uint32_t> T get_EndTimestamp() {
		return ((T (*)(MatchEndLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4A04))(this);
	}
	template <typename T = void> T set_EndTimestamp(uint32_t value) {
		return ((T (*)(MatchEndLoadingBackGroundConfig*, uint32_t))(Il2CppBase() + 0x4EA4A0C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(MatchEndLoadingBackGroundConfig*, bool))(Il2CppBase() + 0x4EA4A14))(this, createIfMissing);
	}

};

}
