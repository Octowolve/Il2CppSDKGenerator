#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRChatFriendCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRChatFriendCell"));
	}

	template <typename T = uintptr_t> T& GetItem() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& RecyleItem() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& BASE_CELL_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& BASE_CELL_GAP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& PlayerName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& Badge() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& itemListContainer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& FoldBtn() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& displayItemList() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& CellDataInfo() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> static T& FirstItemPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kLineCharaters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& kLineHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPoolItemDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigueCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCellUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemDatas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShowItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLineCharatersNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T SetPoolItemDelegate(uintptr_t get, uintptr_t put) {
		return ((T (*)(BRChatFriendCell*, uintptr_t, uintptr_t))(Il2CppBase() + 0x24EB5D4))(this, get, put);
	}
	template <typename T = void> T ConfigueCell(uintptr_t ingameInfo) {
		return ((T (*)(BRChatFriendCell*, uintptr_t))(Il2CppBase() + 0x24EB6C8))(this, ingameInfo);
	}
	template <typename T = int32_t> T UpdateRedDot(uintptr_t ingameInfo) {
		return ((T (*)(BRChatFriendCell*, uintptr_t))(Il2CppBase() + 0x24F1F54))(this, ingameInfo);
	}
	template <typename T = void> T SetCellUI(Il2CppList<uintptr_t>* showDataList, uintptr_t friendInfo, int32_t redDot) {
		return ((T (*)(BRChatFriendCell*, Il2CppList<uintptr_t>*, uintptr_t, int32_t))(Il2CppBase() + 0x24F220C))(this, showDataList, friendInfo, redDot);
	}
	template <typename T = void> T UpdateItemDatas(int32_t startIndex, Il2CppList<uintptr_t>* infoList) {
		return ((T (*)(BRChatFriendCell*, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x24F1A8C))(this, startIndex, infoList);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetShowItems(int32_t startIndex, int32_t endIndex) {
		return ((T (*)(BRChatFriendCell*, int32_t, int32_t))(Il2CppBase() + 0x24F29E4))(this, startIndex, endIndex);
	}
	template <typename T = Il2CppVector3> T GetItemPos(int32_t realRow) {
		return ((T (*)(BRChatFriendCell*, int32_t))(Il2CppBase() + 0x24F2E38))(this, realRow);
	}
	template <typename T = void> static T SetLineCharatersNumber() {
		return ((T (*)(void *))(Il2CppBase() + 0x24E60EC))(0);
	}

};

}
