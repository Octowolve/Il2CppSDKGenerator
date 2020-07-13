#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PictureConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PictureConfConfig"));
	}

	template <typename T = uintptr_t> T& EType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ColourID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Order() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& Show() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Url() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Flag() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& AI() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& IsAutoDemolition() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& GoPos() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& MaxValueDay() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& HDurl() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& EffectID() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIconURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFrameSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetIconURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetFrameSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultUnlockList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNameByColour() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x37816C4))(this);
	}
	template <typename T = Il2CppString*> static T GetIconURL(int32_t id, uint64_t playerID) {
		return ((T (*)(void *, int32_t, uint64_t))(Il2CppBase() + 0x3781770))(0, id, playerID);
	}
	template <typename T = Il2CppString*> static T GetFrameSprite(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3781AC8))(0, id);
	}
	template <typename T = Il2CppString*> static T GetIconURL_1(uintptr_t info, uint64_t playerID) {
		return ((T (*)(void *, uintptr_t, uint64_t))(Il2CppBase() + 0x3781C2C))(0, info, playerID);
	}
	template <typename T = Il2CppString*> static T GetFrameSprite_1(uintptr_t info) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3782044))(0, info);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetDefaultUnlockList() {
		return ((T (*)(void *))(Il2CppBase() + 0x3782250))(0);
	}
	template <typename T = Il2CppString*> static T GetNameByColour(int32_t NameColour, Il2CppString* Name) {
		return ((T (*)(void *, int32_t, Il2CppString*))(Il2CppBase() + 0x37824A8))(0, NameColour, Name);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x3782754))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x376ADE0))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(PictureConfConfig*, int32_t))(Il2CppBase() + 0x37827F4))(this, value);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x3781768))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(PictureConfConfig*, int32_t))(Il2CppBase() + 0x37827FC))(this, value);
	}
	template <typename T = int32_t> T get_ColourID() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x376AE08))(this);
	}
	template <typename T = void> T set_ColourID(int32_t value) {
		return ((T (*)(PictureConfConfig*, int32_t))(Il2CppBase() + 0x3782804))(this, value);
	}
	template <typename T = int32_t> T get_Order() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x378280C))(this);
	}
	template <typename T = void> T set_Order(int32_t value) {
		return ((T (*)(PictureConfConfig*, int32_t))(Il2CppBase() + 0x3782814))(this, value);
	}
	template <typename T = bool> T get_Show() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x378281C))(this);
	}
	template <typename T = void> T set_Show(bool value) {
		return ((T (*)(PictureConfConfig*, bool))(Il2CppBase() + 0x3782824))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x376AE20))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(PictureConfConfig*, Il2CppString*))(Il2CppBase() + 0x378282C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x376ADE8))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x376AE28))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(PictureConfConfig*, Il2CppString*))(Il2CppBase() + 0x3782834))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x376ADF8))(this);
	}
	template <typename T = Il2CppString*> T get_Url() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x3781AC0))(this);
	}
	template <typename T = void> T set_Url(Il2CppString* value) {
		return ((T (*)(PictureConfConfig*, Il2CppString*))(Il2CppBase() + 0x378283C))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x3781C24))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(PictureConfConfig*, Il2CppString*))(Il2CppBase() + 0x3782844))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x378284C))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(PictureConfConfig*, int32_t))(Il2CppBase() + 0x3782854))(this, value);
	}
	template <typename T = int32_t> T get_Flag() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x378285C))(this);
	}
	template <typename T = void> T set_Flag(int32_t value) {
		return ((T (*)(PictureConfConfig*, int32_t))(Il2CppBase() + 0x3782864))(this, value);
	}
	template <typename T = bool> T get_AI() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x378286C))(this);
	}
	template <typename T = void> T set_AI(bool value) {
		return ((T (*)(PictureConfConfig*, bool))(Il2CppBase() + 0x3782874))(this, value);
	}
	template <typename T = bool> T get_IsAutoDemolition() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x378287C))(this);
	}
	template <typename T = void> T set_IsAutoDemolition(bool value) {
		return ((T (*)(PictureConfConfig*, bool))(Il2CppBase() + 0x3782884))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x376AE18))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(PictureConfConfig*, uint32_t))(Il2CppBase() + 0x378288C))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x376AE10))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(PictureConfConfig*, int32_t))(Il2CppBase() + 0x3782894))(this, value);
	}
	template <typename T = int32_t> T get_GoPos() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x378289C))(this);
	}
	template <typename T = void> T set_GoPos(int32_t value) {
		return ((T (*)(PictureConfConfig*, int32_t))(Il2CppBase() + 0x37828A4))(this, value);
	}
	template <typename T = int32_t> T get_MaxValueDay() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x37828AC))(this);
	}
	template <typename T = void> T set_MaxValueDay(int32_t value) {
		return ((T (*)(PictureConfConfig*, int32_t))(Il2CppBase() + 0x37828B4))(this, value);
	}
	template <typename T = Il2CppString*> T get_HDurl() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x37828BC))(this);
	}
	template <typename T = void> T set_HDurl(Il2CppString* value) {
		return ((T (*)(PictureConfConfig*, Il2CppString*))(Il2CppBase() + 0x37828C4))(this, value);
	}
	template <typename T = int32_t> T get_EffectID() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x37828CC))(this);
	}
	template <typename T = void> T set_EffectID(int32_t value) {
		return ((T (*)(PictureConfConfig*, int32_t))(Il2CppBase() + 0x37828D4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PictureConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x37828DC))(this, bytes, position);
	}
	template <typename T = bool> static T GetDefaultUnlockListm__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3782BF8))(0, x);
	}
	template <typename T = bool> static T GetDefaultUnlockListm__1(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3782CE0))(0, x);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(PictureConfConfig*))(Il2CppBase() + 0x3782D0C))(this);
	}

};

}
